#include <avr/sleep.h>
#include <avr/interrupt.h>

#define IR_SEND_PIN   PIN_PB0  
#define USE_ACTIVE_LOW_OUTPUT_FOR_SEND_PIN

#define BTN_POWER     PIN_PA4
#define BTN_SPEED_UP  PIN_PA6
#define BTN_SPEED_DN  PIN_PA5
#define BTN_PRESET_1  PIN_PA7
#define BTN_PRESET_2  PIN_PB5
#define BTN_PRESET_3  PIN_PB4
#define BTN_PRESET_4  PIN_PB1

#define IR_ADDRESS    0x13

#define CMD_POWER     0x01
#define CMD_SPEED_UP  0x02
#define CMD_SPEED_DN  0x03
#define CMD_PRESET_1  0x04
#define CMD_PRESET_2  0x05
#define CMD_PRESET_3  0x06
#define CMD_PRESET_4  0x07

#include "TinyIRSender.hpp"

const uint8_t buttonPins[] = {BTN_POWER, BTN_SPEED_UP, BTN_SPEED_DN, BTN_PRESET_1, BTN_PRESET_2, BTN_PRESET_3, BTN_PRESET_4};
const uint8_t buttonCommands[] = {CMD_POWER, CMD_SPEED_UP, CMD_SPEED_DN, CMD_PRESET_1, CMD_PRESET_2, CMD_PRESET_3, CMD_PRESET_4};

volatile bool wakeFlag = false;

void wakeISR() {
  wakeFlag = true;
}

void setup() {
  for (uint8_t i = 0; i < 18; i++) {
    pinMode(i, INPUT_PULLUP);
  }

  pinMode(IR_SEND_PIN, OUTPUT);

  // HIGH is off, LOW is on
  digitalWrite(IR_SEND_PIN, HIGH); // Keep IR LED off at start

  for (uint8_t i = 0; i < 7; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(buttonPins[i]), wakeISR, FALLING);
  }

  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
}

void loop() {
  if (wakeFlag) {
    delay(20); // Debounce so button isn't pressed multiple times quickly

    // Goes through each button
    for (uint8_t i = 0; i < 7; i++) {

      // Checks if a button is pressed
      if (digitalRead(buttonPins[i]) == LOW) {
        sendNEC(IR_SEND_PIN, IR_ADDRESS, buttonCommands[i], 0);

        // Wait until button is released
        while (digitalRead(buttonPins[i]) == LOW) {
          delay(50);
        }
        break;
      }
    }

    wakeFlag = false;
  }

  digitalWrite(IR_SEND_PIN, HIGH); // Keep IR LED off during sleep
  sleep_cpu();
}
