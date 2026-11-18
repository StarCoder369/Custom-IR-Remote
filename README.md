 <div align="center">

# Custom IR Remote

**A custom-built infrared remote for my custom desk fan project.**

An IR Remote containing 7 buttons, with a custom PCB.

---

</div>

---

## Table of Contents

- [Overview](#overview)
  - [Description](#description)
  - [Why I'm Making This](#why-im-making-this)
- [Images/Screenshots](#imagesscreenshots)
  - [Schematic](#schematic)
  - [PCB](#pcb)
  - [CAD](#cad-case)
- [BOM (Bill of Materials)](#bom-bill-of-materials)
- [Additional Information](#additional-information)

---

## Overview

This is an overview of the whole project.

### Description

This is an IR remote designed specifically for a custom desk fan(currently in making).

#### Main Components

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

<details >
<summary><strong>Power Switch</strong></summary>

- Used to switch the IR Remote on/off.
- Connected to the PCB using two wires.

</details>

<details >
<summary><strong>USB-to-UPDI programmer</strong></summary>

- 'Talks' to the microcontroller
- Connected to the 01x03 connector on the PCB

</details>

<details >
<summary><strong>N52 Magnets</strong></summary>

- Four on each corner of the back of the remote
- Used to magnetically attach the remote to the desk fan

</details>

### Why I'm Making This

I'm making this IR Remote because I wanted a way to wirelessly control my custom desk fan(which is still in the designing phase).

Instead of just using an app, I wanted to make my own way to control it. I wanted to make something that could work on it's own, not needing a phone or another device.

There's still going to be an app, but it's not a big part, and it's mostly to improve the ease of use and add some customizability.

---

## Images/Screenshots

This is where I'm going to be adding all the images and screenshots.

<details>
<summary><strong>Click here to hide/show all schematic images</strong></summary>

### Schematic

#### Microcontroller Portion

![Microcontroller Portion](https://github.com/user-attachments/assets/83b8b4a8-8f16-4974-ac36-db7c4563ab2c)

#### Main LED Portion

![IR LED Portion](https://github.com/user-attachments/assets/e9089d64-6ebe-4e98-b873-b8c661b8aef6)

#### Power Switch Portion

![Power Switch Portion](https://github.com/user-attachments/assets/a9683ecd-7099-482b-ae4b-087781415219)

#### Buttons Portion

![Buttons Portion](https://github.com/user-attachments/assets/91e2e072-a190-40a5-8990-25fbfa01a6da)

#### Battery Connector Portion

![Battery Connector Portion](https://github.com/user-attachments/assets/40ec2d44-01db-4ba4-ab01-8d3e2de6c082)

#### Programming Connector Portion

![Programming Connector Portion](https://github.com/user-attachments/assets/e92d2575-e264-4748-9eb5-a200af25f2b1)

#### Complete Schematic

![Complete Schematic Screenshot](https://github.com/user-attachments/assets/b093bac4-4b5d-41d1-b8a2-2d518f6f8c62)

</details>

<details>
<summary><strong>Click here to hide/show all PCB images</strong></summary>

### PCB

#### PCB (Showing Filled Zones)
<img width="914" height="640" alt="Screenshot 2026-11-10 at 9 33 42 PM" src="https://github.com/user-attachments/assets/37df905b-5dd9-4ed2-842f-b31577b8bbd8" />

#### PCB (Not Showing Filled Zones)
<img width="914" height="640" alt="Screenshot 2026-11-10 at 9 34 16 PM" src="https://github.com/user-attachments/assets/fca2ff1c-7865-4406-9393-fd768775e069" />

</details>

<details>
<summary><strong>Click here to hide/show all CAD images</strong></summary>

### CAD (Case)

#### PCB Holder Portion
<img width="841" height="600" alt="Screenshot 2026-11-14 at 9 02 55 PM" src="https://github.com/user-attachments/assets/fbde84e7-5a7f-4a89-afde-d9c641a2498b" />


#### Battery Case Bottom Portion (Without Battery Holder Component)
<img width="663" height="512" alt="Screenshot 2026-11-14 at 9 03 45 PM" src="https://github.com/user-attachments/assets/5f71ab6a-5b3c-478e-a024-b4da512777cf" />


#### Battery Case Bottom Portion (With Battery Holder Component)
<img width="630" height="558" alt="Screenshot 2026-11-14 at 9 04 41 PM" src="https://github.com/user-attachments/assets/90529d5c-0690-4505-8f51-d96701425a17" />


#### Battery Case Top-1
<img width="618" height="474" alt="Screenshot 2026-11-14 at 9 05 22 PM" src="https://github.com/user-attachments/assets/473c8dda-fcd4-4a32-aeb8-586fb7dfa291" />


#### Battery Case Top-2
<img width="618" height="474" alt="Screenshot 2026-11-14 at 9 05 52 PM" src="https://github.com/user-attachments/assets/eaf77669-8681-4177-9414-f89d5923abd6" />


#### Battery Case Top-Both
<img width="618" height="474" alt="Screenshot 2026-11-14 at 9 06 26 PM" src="https://github.com/user-attachments/assets/453a0e1f-68f6-4eed-8798-31a5605d522e" />

#### Complete Battery Case
<img width="618" height="474" alt="Screenshot 2026-11-14 at 9 06 58 PM" src="https://github.com/user-attachments/assets/4f9d2021-e205-40be-a7bd-6a1e72935008" />


#### Main Case Bottom (Without Other Parts)
<img width="700" height="486" alt="Screenshot 2026-11-14 at 9 07 48 PM" src="https://github.com/user-attachments/assets/af1ee9eb-f38b-4236-b714-87a6db670df2" />


#### Main Case Bottom (With Other Parts)
<img width="700" height="486" alt="Screenshot 2026-11-14 at 9 08 22 PM" src="https://github.com/user-attachments/assets/793c7448-ac96-4544-b601-f523b5e2e62a" />


#### Main Case Top
<img width="976" height="619" alt="Screenshot 2026-11-14 at 9 09 04 PM" src="https://github.com/user-attachments/assets/ed6d799d-7065-41ed-97ed-7adc61cd4977" />


#### Main Case Both
<img width="886" height="576" alt="Screenshot 2026-11-14 at 9 09 38 PM" src="https://github.com/user-attachments/assets/73813ff9-35db-4f5d-8d31-b01efe2e8516" />


#### Everything Together
<img width="555" height="619" alt="Screenshot 2026-11-14 at 9 10 28 PM" src="https://github.com/user-attachments/assets/342c4031-3533-4b52-88a0-68a317a7c2ac" />


</details>

---

## BOM (Bill of Materials)

> [!WARNING]
> These are estimated prices, the final prices may be different.
>
> Currently, the price to 3D print the case is not factored.
>
> Everything below might change.
>
> Reference number are the ones in the schematic.

**PCB Cost has not been finalized. Currently using JLCPCB estimates, since it seems like it is cheaper than PCBWAY**

| **Ref.** | **Component** | **Exact Part** | **Qty** | **Type** | **Est. Cost** | **KiCad Footprint** | **Supplier/Purchase Link** | **Purpose/Notes** |
|:--------:|---------------|----------------|:-------:|:--------:|---------------:|---------------------|----------------------------|-------------------|
| U1 | Microcontroller | Microchip ATtiny1616-SN | 1 | SMD | $1.16 | `Package_SO:SOIC-20W_7.5x12.8mm_P1.27mm` | [DigiKey](https://www.digikey.com/en/products/detail/microchip-technology/ATTINY1616-SN/10231345) | Controls the remote and sends IR commands. |
| D1 | IR LED | Vishay TSAL6200 | 1 | Through-Hole | $0.50 | `LED_THT:LED_D5.0mm` | [DigiKey](https://www.digikey.com/en/products/detail/vishay-semiconductor-opto-division/TSAL6200/1681339) | Sends infrared signals to the fan. |
| Q1 | IR LED driver transistor | onsemi BC547BTA | 1 | Through-Hole | $0.28 | `Package_TO_SOT_THT:TO-92_Inline` | [DigiKey](https://www.digikey.com/en/products/detail/onsemi/BC547BTA/965854) | Controls the IR LED when sending commands. |
| SW1–SW7 | Tactile Buttons | Aratas B3F-1000 | 7 | Through-Hole | $2.45 ($0.35 × 7) | `Button_Switch_THT:SW_PUSH_6mm` | [DigiKey](https://www.digikey.com/en/products/detail/omron-electronics-inc-emc-div/B3F-1000/33150) | Used for power, speed control, and the four presets. |
| SW8 | Power Switch | C&K OS102011MS2QS1 | 1 | Through-Hole | $0.85 | `Button_Switch_THT:SW_Slide_SPDT_Straight_CK_OS102011MS2Q` | [DigiKey](https://www.digikey.com/en/products/detail/c-k/OS102011MS2QS1/1981413) | Turns the remote on and off. |
| C1 | Decoupling Capacitor | Vishay K104K15X7RF5TH5 | 1 | Through-Hole | $0.29 | `Capacitor_THT:C_Disc_D5.0mm_W2.5mm_P5.00mm` | [DigiKey](https://www.digikey.com/en/products/detail/vishay-beyschlag-draloric-bc-components/K104K15X7RF5TH5/286723) | Helps keep the microcontroller's power supply stable. |
| C2 | Power-Supply Capacitor | Panasonic EEA-GA1C100H | 1 | Through-Hole | $0.29 | `Capacitor_THT:CP_Radial_D4.0mm_P2.50mm` | [DigiKey](https://www.digikey.com/en/products/detail/panasonic-industry/EEA-GA1C100H/2513289) | Helps smooth out the power supply. |
| R1 | IR LED current-limiting resistor | YAGEO CFR-25JB-52-47R | 1 | Through-Hole | $0.10 | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-47R/2219) | Limits the current going to the IR LED. |
| R2 | Transistor base resistor | YAGEO CFR-25JB-52-330R | 1 | Through-Hole | $0.11 | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-330R/1636) | Helps control the transistor. |
| R3 | UPDI series resistor | YAGEO CFR-25JB-52-1K | 1 | Through-Hole | $0.10 | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-1K/96) | Used in the microcontroller programming connection. |
| R4 | Transistor base pull-down resistor | YAGEO CFR-25JB-52-100K | 1 | Through-Hole | $0.11 | `Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal` | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CFR-25JB-52-100K/245) | Keeps the IR LED driver turned off when not in use. |
| J1 | Battery Holder | Keystone Electronics 2469 | 1 | External / Wired | $1.40 | `Connector_Wire:SolderWire-0.25sqmm_1x02_P4.2mm_D0.65mm_OD1.7mm` | [DigiKey](https://www.digikey.com/en/products/detail/keystone-electronics/2469/303818) | Holds the two AAA batteries that power the remote. |
| J2 | UPDI Programming Header | Samtec TSW-103-07-G-S | 1 | Through-Hole | $0.27 | `Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical` | [DigiKey](https://www.digikey.com/en/products/detail/samtec-inc/TSW-103-07-G-S/1101324) | Connects a programmer for uploading firmware. |
| B1–B2 | AAA Batteries | Energizer E92BP-2 | 2 | External | $2.14 (2-pack) | N/A | [RS](https://us.rs-online.com/product/energizer/e92bp-2/70344399/) | Provide power to the remote. |

> [!NOTE]
> J1 is a connector, which the battery holder will connect to. There is no physical component, so the battery holder has been put in its place.

### Estimated Cost

| **Category** | **Estimated Cost** |
|---|---:|
| PCB component, battery holder, and batteries | $10.05 |
| PCB | $6.22 |
| **Main Remote Components Total** | **$16.27** |

### Other Tools/Parts (Not Included in PCB BOM)
| **Component** | **Exact Part** | **Qty** | **Est. Cost** | **Purchase Link** | **Purpose/Notes** |
|---|---|:---:|---:|---|---|
| UPDI Programmer | Adafruit UPDI Friend (Product 5879) | 1 | $6.95 | [Adafruit](https://www.adafruit.com/product/5879) | External USB-C programmer for uploading firmware to the ATtiny1616. Reusable and not installed on the remote PCB. |
| Soldering Iron | PINECIL - Smart Mini Portable Soldering Iron (Version 2) | 1 | $25.99 | [Pinecil Store](https://pine64.com/product/pinecil-smart-mini-portable-soldering-iron/) | Soldering iron to solder components onto the PCB |
| Soldering Iron Tips | PINECIL Threaded Insert Tips Set and Adapter | 1 | $14.99 | [Pinecil Store](https://pine64.com/product/pinecil-threaded-insert-tips-set-and-adapter/) | Needed to install heat-set inserts into the case using the soldering iron |
| Neodymium Magnets | N52 Neodymium Magnet Disc 10mm OD x 3mm H | 4 | $3.92 ($0.98 x 4) | [Supreme Magnets](https://suprememagnets.com/products/n52-neodymium-magnet-disc-10mm-od-x-3mm-h) | Needed to magnetically attach the remote onto the desk fan |
| Glue | Loctite Super Glue Gel Control, Clear, 0.14 fl oz Bottle, 1 Pack - Superglue for Plastic, Wood, Metal, Crafts & Repair, Cyanoacrylate Adhesive Instant Glue, Quick Dry | 1 | $4.18 | [Amazon](https://www.amazon.com/dp/B0006HUJCQ?plpRedirect=mhFallback&ref=clp_cat_related_p_2&th=1) | Needed to glue magnets onto case |
| Heat-Set Inserts | Heat Set Threaded Inserts (M3 x 5.7) | 4 | $2.00 ($0.50 x 4) | [Pev Dispensary](https://pevdispensary.com/products/heat-set-threaded-inserts?_pos=1&_psq=heat-set&_psid=b41701175&_ss=e) | Installed into the case using the soldering iron so screws can be used on the case |
| Screws | M3.0 x 8mm Black Screws KM3X8 | 5 | $0.45 ($0.09 x 5) | [MODDIY](https://www.moddiy.com/products/1291/M3.0-x-8mm-Black-Screws-KM3X8.html) | Screwed into heat-set inserts to hold case lid down |

**Estimated Total (including everything): $74.75**

*Prices are estimates and may change. Shipping(for components), taxes, and the 3D-printed case are not included(3D Printing cost will be added once case has been finalized).*

---

## Additional Information

<details>
<summary><strong>How the IR Remote works</strong></summary>

Each button will have a custom address that the ir receiver will pick up on.

*Ex: 0xABCD will be transmitted, the ir receiver will constantly be checking to see if a signal contains the address 0xABCD, and if it is, then it does something.*

There is a power switch on the fan itself. This is basically the real power switch, and switching it off also switches off the ir receiver. The IR remote power button however, only switches off the fan motor, not the actual device itself.

</details>

<details>
<summary><strong>ATtiny1616-S (Micro controller)</strong></summary>

This is the microcontroller used in the IR Remote.

- The ATtiny1616-S or ATtiny1616-SN, uses a SOIC package. It has 20 pins, and it's pretty easy to solder by hand.
  - However, since it uses a SOIC package, it uses a lot more space in the PCB.
  - Though it uses more space, I felt like it was more important to have something that I could solder without causing problems.
- It has Hardware IR Modulation, which is basically perfect for IR remotes.
  - This eliminates the need for the CPU to constantly toggle pins through the software to blink the IR LED.
- This microcontroller uses a very low amount of power, so the batteries will be able to last for a long time.

</details>

<details>
<summary><strong>PCB</strong></summary>

- The PCB was created in Kicad.
- It is exactly 81mm x 57mm.
- Instead of wiring components directly to GND, a GND plane fills the PCB.
- It is a two layer PCB

</details>
