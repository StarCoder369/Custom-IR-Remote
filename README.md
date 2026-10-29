<div align="center">

# Custom IR Remote

**A custom-built infrared remote for my custom desk fan project.**

An IR Remote containing 7 buttons, with a custom PCB.

---

</div>


> [!NOTE]
> Please know that no AI was used to create this README. This README was typed manually by me, so there may be mistakes even after I've proofread it multiple times.
>
> If there are any mistakes please let me know.

---

## Table of Contents

- [Overview](#overview)
  - [Description](#description)
  - [Why I'm Making This](#why-im-making-this)
- [Images/Screenshots](#imagesscreenshots)
  - [Schematic](#schematic)
- [BOM (Bill of Materials)](#bom-bill-of-materials)
- [ATtiny1616-S (Microcontroller)](#attiny1616-s-micro-controller)

---

# Overview

This is an overview of the whole project.

## Description

This is an IR remote designed specifically for a custom desk fan(currently in making).

### Main Components

<details open>
<summary><strong>7 Buttons</strong></summary>

| Button | Purpose |
|:---|:---|
| **🔘 Power Button 🔘** | Used to power the fan on and off |
| **▲ Speed Up Button ▲** | Used to speed up the fan |
| **▼ Speed Down button ▼** | Used to lower the speed of the fan |
| **Preset 1 1️⃣** | The first fan speed preset |
| **Preset 2 2️⃣** | The second fan speed preset |
| **Preset 3 3️⃣** | The third fan speed preset |
| **Preset 4 4️⃣** | The fourth fan speed preset |

All buttons connect to the PCB using soldered wires.

</details>

<details open>
<summary><strong>Custom PCB</strong></summary>

- To lower the size of the remote
- To make everything much neater, and lessen the need for physical wires.
- This is what all the components connect to.

</details>

<details open>
<summary><strong>Battery Holder</strong></summary>

- Holds the two AAA batteries
- Connects to the PCB using two wires connected to a 01x02 connector.

</details>

<details open>
<summary><strong>IR LED</strong></summary>

- Emits light in the IR spectrum that the IR Receiver on the fan can detect.
- Connects to the PCB using two wires connected to a 01x02 connector.

</details>

<details open>
<summary><strong>Microcontroller</strong></summary>

- The main brains of the remote
- Soldered onto the PCB

</details>

<details open>
<summary><strong>Power Switch</strong></summary>

- Used to switch the IR Remote on/off.
- Connected to the PCB using two wires.

</details>

<details open>
<summary><strong>USB-to-UPDI programmer</strong></summary>

- 'Talks' to the microcontroller
- Connected to the 01x03 connector on the PCB

</details>

## Why I'm Making This

I'm making this IR Remote because I wanted a way to wirelessly control my custom desk fan(which is still in the designing phase). 

Instead of just using an app, I wanted to make my own way to control it. I wanted to make something that could work on it's own, not needing a phone or another device. 

There's still going to be an app, but it's not a big part, and it's mostly to improve the ease of use and add some customizability.

---

# Images/Screenshots

This is where I'm going to be adding all the images and screenshots.

<details>
<summary><strong>Click here to view all schematic images</strong></summary>

<br>

## Schematic

### Microcontroller Portion

![Microcontroller Portion](https://github.com/user-attachments/assets/83b8b4a8-8f16-4974-ac36-db7c4563ab2c)

### Main LED Portion

![IR LED Portion](https://github.com/user-attachments/assets/e9089d64-6ebe-4e98-b873-b8c661b8aef6)

### Power Switch Portion

![Power Switch Portion](https://github.com/user-attachments/assets/a9683ecd-7099-482b-ae4b-087781415219)

### Buttons Portion

![Buttons Portion](https://github.com/user-attachments/assets/91e2e072-a190-40a5-8990-25fbfa01a6da)

### Battery Connector Portion

![Battery Connector Portion](https://github.com/user-attachments/assets/40ec2d44-01db-4ba4-ab01-8d3e2de6c082)

### Programming Connector Portion

![Programming Connector Portion](https://github.com/user-attachments/assets/e92d2575-e264-4748-9eb5-a200af25f2b1)

### Complete Schematic

![Complete Schematic Screenshot](https://github.com/user-attachments/assets/b093bac4-4b5d-41d1-b8a2-2d518f6f8c62)

</details>

---

# BOM (Bill of Materials)

> [!NOTE]
> These are estimated prices, the final prices may be different.
>
> Currently, the price to 3D print the case is not factored.
>
> Everything below might change.
>
> Reference number are the ones in the schematic.

**IN PROGRESS**

<br>

| **Ref.** | **Component** | **Exact Part** | **Qty** | **Type** | **Est. Total Cost** | **Kicad Footprint** | **Supplier/Purchase Link** | **Purpose/Notes** |
|:---:|:---|:---|:---:|:---:|---:|:---|:---|:---|
| U1 | Microcontroller | MicrochipATtiny1616-S | 1 | Solder | $1.16 | `Package_SO:SOIC-20W_7.5x12.8mm_P1.27mm` | [DigiKey](https://www.digikey.com/en/products/detail/microchip-technology/ATTINY1616-SN/10231345?gclsrc=aw.ds&gad_source=1&gad_campaignid=20790518593&gbraid=0AAAAADrbLljM6GxGvRl7-2G9TBt4i-OXL&gclid=CjwKCAjwi-zWBhAdEiwAqlRf-EygoNddCmALjr8i82Xuxs25xnLS4NE329Q1yVUe1apmqWVAHRll5xoCatQQAvD_BwE) | Runs the firmware, reads buttons, generates IR signals. SOIC pins are soldered on pcb surface pads. |
| D1 | IR LED | Vishay TSAL6200, 940 nm | 1 | Through-Hole | $0.50 | `LED_THT:LED_D5.0mm` | [DigiKey](https://www.digikey.com/en/products/detail/vishay-semiconductor-opto-division/TSAL6200/1681339?gclsrc=aw.ds&gad_source=1&gad_campaignid=20228387720&gbraid=0AAAAADrbLliNGTjDmvi36_Q-MRvV1ijCc&gclid=CjwKCAjwi-zWBhAdEiwAqlRf-DyOax2C-a4FzVuQMSiwmjW14pHEv-Ghv_gznsjcCdGDOqNPgJIj0BoCGIAQAvD_BwE) | Transmits commands to the fan. |
| Q1 | NPN Transistor | BC547B | 1 | Through-Hole | $0.14 | `Package_TO_SOT_THT:TO-92_Inline` | [DigiKey](https://www.digikey.com/en/products/detail/diotec-semiconductor/BC547B/13164496) | Switches current through the IR LED. |
| R1 | LED current-limiting resistor | 47Ω, 1/4W, Axial | 1 | Through-Hole | $0.10 | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` | [DigiKey](https://www.digikey.com/en/products/detail/yageo/MFR-25FTE52-47R/9140228) | Limits IR LED current. |
| R2 | Transistor base resistor | 330Ω, 1/4W, Axial | 1 | Through-Hole | $ | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` |  |  |



# How the IR Remote works

Each button will have a custom address that the ir receiver will pick up on. Ex: 0xABCD will be transmitted, then the ir receiver will constantly be checking to see if a signal contains the address 0xABCD, and if it is exactly the same, then it will do whatever it needs to do.

The power button on the IR remote will switch the fan on and off. This is how it will work:
There is a power switch on the fan itself. This is basically the real power switch, and switching it off also switches off the ir receiver. The IR remote power button however, only switches off the fan, not the actual device itself. Things will keep taking power, though much lesser than if the fan is running at full power.

<details>
 <summary><h1>ATtiny1616-S (Micro controller)</h1></summary>

 This is the microcontroller used in the IR Remote. 

  - The ATtiny1616-S or ATtiny1616-SN, uses a SOIC package. It has 20 pins, and it's pretty easy to solder by hand.
    - However, since it uses a SOIC package, it uses a lot more space in the PCB.
    - Though it uses more space, I felt like it was more important to have something that I could solder without causing problems.
 - It has Hardware IR Modulation, which is basically perfect for IR remotes.
    - This eliminates the need for the CPU to constantly toggle pins through the software to blink the IR LED.
 - This microcontroller uses a very low amount of power, so the batteries will be able to last for a long time.
 
</details>
