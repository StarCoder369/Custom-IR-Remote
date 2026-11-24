<div align="center">

# Custom IR Remote

**A custom-built infrared remote for my custom desk fan project.**

An IR Remote containing 7 buttons, with a custom PCB.

---

</div>

---

<details>
<summary><h2>Table of Contents</h2></summary>

> The links below will not work unless that dropdown has been opened

- [Overview](#overview)
  - [Description](#description)
  - [Why I'm Making This](#why-im-making-this)
- [Images/Screenshots](#imagesscreenshots)
  - [Schematic](#schematic)
  - [PCB](#pcb)
  - [CAD](#cad-case)
- [BOM (Bill of Materials)](#bom)
  - [Main PCB Components](#main-pcb-components)
  - [Remote Components Cost](#estimated-remote-components-cost)
  - [Other tools/parts](#other-toolsparts)
- [About the Parts Selected](#about-parts-selected)
- [Schematic Details](#schematic-details)
- [3D Printing Details](#details-for-3d-printing)
- [Additional Information](#additional-info)
- [Credits](#credits)

</details>

---

<details>
<summary><h2>Overview</h2></summary>

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

- To decrease the size of the remote
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

<details open>
<summary><strong>N52 Magnets</strong></summary>

- Four on each corner of the back of the remote
- Used to magnetically attach the remote to the desk fan

</details>

<details open>
<summary><strong>Heat-Set Inserts</strong></summary>

- Will be inserted to the top corners of the case
- Allows screws to be used to hold the lid down

</details>

<details open>
<summary><strong>Buttons</strong></summary>

- 7 buttons
- Each has a different function
- All of them will be soldered to the PCB

</details>

### Why I'm Making This

I'm making this IR Remote because I wanted a way to wirelessly control my custom desk fan(which is still in the designing phase).

Instead of just using an app, I wanted to make my own way to control it. I wanted to make something that could work on it's own, not needing a phone or another device.

There's still going to be an app, but it's not a big part, and it's mostly to improve the ease of use and add some customizability.

Now even though I could just use a generic IR Remote that I can buy online, this project was also a learning challenge for me, and I personally think it's much better and more fun to make my own.

</details>

---

<details>
<summary><h2>Images/Screenshots</h2></summary>

This is where I'm going to be adding all the images and screenshots.

**CAD SCREENSHOTS HAVE TO BE UPDATED**

### Schematic

<details>
<summary><strong>Click here to hide/show all schematic images</strong></summary>

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

### PCB

<details>
<summary><strong>Click here to hide/show all PCB images</strong></summary>

#### PCB (Showing Filled Zones)
<img width="914" height="640" alt="Screenshot 2026-11-10 at 9 33 42 PM" src="https://github.com/user-attachments/assets/37df905b-5dd9-4ed2-842f-b31577b8bbd8" />

#### PCB (Not Showing Filled Zones)
<img width="914" height="640" alt="Screenshot 2026-11-10 at 9 34 16 PM" src="https://github.com/user-attachments/assets/fca2ff1c-7865-4406-9393-fd768775e069" />

</details>

### CAD (Case)

<details>
<summary><strong>Click here to hide/show all CAD images</strong></summary>

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

</details>

---

<details>
<summary><h2 id="bom">BOM</h2></summary>

> [!WARNING]
> These are estimated prices, the final prices may be different.
>
> Reference number are the ones in the schematic.

### Main PCB Components

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
| B1–B2 | AAA Batteries | Energizer Max Alkaline Batteries AAA 2 Each | 2 | External | $5.09 (2-pack) | N/A | [Amazon](https://www.amazon.com/Energizer-MAX-Alkaline-Batteries-Pack/dp/B00003IEM9/ref=sr_1_1?crid=1R5Q5H0U1N4MA&dib=eyJ2IjoiMSJ9.-J3RQvAfb9xdYkFISSO4y3AduNOJeUzNr0xkALFf9kgSEWOsKeL0i5_2h3EDz4lC9VpplQWgW__Im-mKuZHLgtRHvcjNEWr7CIr39bI7LtNjWBfKKD49iDBD_4RwlWHYhm9zbXP-ncLFMJg3TWQCN6IRO4bmVqequpENO8zsH6gED8lUeYwA5d3AjxRUVbFwqU5AU5Xcx8JNh8m1kagbji5c1Mswtthyb1CQW5HsBSASrcKXuoCpf2Xo_llRbgNO1LqfPV-yASuGBaBdtdVtaxvwQO4kQIbjTFAnPweYY3g.ylXVBRf7wR-I_RF41wxVxmvUJAZUJY90ZbtLZI4-cn0&dib_tag=se&keywords=Energizer%2BE92BP-2%2Baaa%2Bbatteries&qid=1795063780&refinements=p_n_g-1002806120111%3A23555310011&rnid=23555274011&sprefix=%2Caps%2C164&sr=8-1&th=1) | Provides power to the remote. |

> [!NOTE]
> J1 is a connector, which the battery holder will connect to. There is no physical component, so the battery holder has been put in its place.

### Estimated Remote Components Cost
#### Does not include tools/additional parts like screws, magnets, etc.

| **Category** | **Estimated Cost** |
|---|---:|
| PCB components, battery holder, and batteries | $13 |
| PCB | $7.80 |
| **Main Remote Components Total** | **$20.08** |

### Other Tools/Parts

| **Component** | **Exact Part** | **Qty** | **Est. Cost** | **Purchase Link** | **Purpose/Notes** |
|---|---|:---:|---:|---|---|
| UPDI Programmer | Adafruit UPDI Friend (Product 5879) | 1 | $6.95 | [Adafruit](https://www.adafruit.com/product/5879) | External USB-C programmer for uploading firmware to the ATtiny1616. Reusable and not installed on the remote PCB. |
| Soldering Iron | PINECIL - Smart Mini Portable Soldering Iron (Version 2) | 1 | $25.99 | [Pinecil Store](https://pine64.com/product/pinecil-smart-mini-portable-soldering-iron/) | Soldering iron to solder components onto the PCB |
| Soldering Iron Tips | PINECIL Threaded Insert Tips Set and Adapter | 1 | $14.99 | [Pinecil Store](https://pine64.com/product/pinecil-threaded-insert-tips-set-and-adapter/) | Needed to install heat-set inserts into the case using the soldering iron |
| Neodymium Magnets | N52 Neodymium Magnet Disc 10mm OD x 3mm H | 4 | $3.92 ($0.98 x 4) | [Supreme Magnets](https://suprememagnets.com/products/n52-neodymium-magnet-disc-10mm-od-x-3mm-h) | Needed to magnetically attach the remote onto the desk fan |
| Glue | Loctite Super Glue Gel Control, Clear, 0.14 fl oz Bottle, 1 Pack - Superglue for Plastic, Wood, Metal, Crafts & Repair, Cyanoacrylate Adhesive Instant Glue, Quick Dry | 1 | $4.18 | [Amazon](https://www.amazon.com/dp/B0006HUJCQ?plpRedirect=mhFallback&ref=clp_cat_related_p_2&th=1) | Needed to glue magnets onto case |
| Heat-Set Inserts | Heat Set Threaded Inserts (M3 x 5.7) | 4 | $2.00 ($0.50 x 4) | [Pev Dispensary](https://pevdispensary.com/products/heat-set-threaded-inserts?_pos=1&_psq=heat-set&_psid=b41701175&_ss=e) | Installed into the case using the soldering iron so screws can be used on the case |
| Screws | M3.0 x 8mm Black Screws KM3X8 | 5 | $0.45 ($0.09 x 5) | [MODDIY](https://www.moddiy.com/products/1291/M3.0-x-8mm-Black-Screws-KM3X8.html) | Screwed into heat-set inserts to hold case lid down |

**Other tools total: $58.48**

### 3D Printing Costs

> These estimates are from Bambu Studio.
> Different printers may have slightly different filament costs or times.
>
> Does not account for printing on the same plate
>
> Support is enabled for all parts in this estimate to ensure maximum stability
> See [Details for 3D Printing](#details-for-3d-printing) to understand what parts require supports


| **Part** | **Filament Usage** | **Printing Time (Normal speed)** | **Est. Cost ($18/kg)** | **Purpose/Notes** |
|---|:---:|:---:|:---:|---|
| Case Bottom | 85.84g | 2h 28m | $1.55 | The walls of the model are thick enough to not require additional infill (Support enabled, not required) |
| Case Top | 35.71g | 1h 14m | $0.64 | 30% infill with four wall loops to increase strength and durability |
| PCB Holder | 19.29g | 0h 36m | $0.35 | Support is enabled, but is not required |
| Battery Holder Bottom | 19.33g | 0h 43m | $0.35 | Support enabled, but is not required |
| Battery Holder Top 1 | 15.67g | 0h 44m | $0.28 | 30% infill, four wall loops, support enabled (and required) |
| Battery Holder Top 2 | 11.84g | 0h 33m | $0.21 | 30% infill, four wall loops, support enabled (and required) |

**3D Printing Costs Total: $3.38**

**Final Estimated Total: $82.66**

*Prices are estimates and may change. Most shipping prices and taxes have not been included. Most discounts have also not been considered.*


</details>

---

<details><summary><h2 id="about-parts-selected"> About Parts Selected </h2></summary>

### Batteries
I'm using an Amazon link, since even though the batteries may seem cheaper in other places, after factoring in shipping, it ends up being much more.

### Soldering Iron
I've put the Pinecil in the BOM, but most soldering irons will work as long as you can use heat-set inserts with them.
I've selected the Pinecil since it's quite reliable.

### Soldering Iron Tips
These tips were selected because they are the ones meant for the Pinecil. Use the correct tips for other soldering irons.

### PCB
The PCB is being ordered from PCBway due to it being cheaper.

### Screws
The screws are being bought individually to get the cheapest options. The M3 screws will fit inside the heat-set inserts to hold it together. 5 screws are being bought just to be safe.

### Heat-Set Inserts
The heat-set inserts are also being bought individually to keep it cheap. Only four heat-set inserts will be necessary for the case, so only the price of four is in the BOM.

</details>

---

<details>
<summary><h2 id="schematic-details"> Schematic Details </h2></summary>

Refer to the [Schematic Screenshots](#schematic) to see the images of the schematic.

### Buttons

How the buttons connect to the microcontroller

**SW1 (Power)** - BTN_POWER --> PA4(Pin 2)
**SW2 (Speed Down)** - BTN_DOWN --> PA5(Pin 3)
**SW3 (Speed Up)** - BTN_UP --> PA6(Pin 4)
**SW4 (Preset 1)** - BTN_PRESET1 --> PA7(Pin 5)
**SW5 (Preset 2)** - BTN_PRESET2 --> PB5(Pin 6)
**SW6 (Preset 3)** - BTN_PRESET3 --> PB4(Pin 7)
**SW7 (Preset 4)** - BTN_PRESET4 --> PB1(Pin 10)

</details>

---

<details>
<summary><h2 id="details-for-3d-printing">Details for 3D Printing</h2></summary>

The only 2 parts that need supports are the two parts of the lid of the battery holder.
You can still enable supports for other parts if you wish, but they should not be required since most modern printers can handle bridging of those distances.

Parts can be printed in PLA.

### Recommended Printing Settings

> These are recommended printing settings. You can change them to what you think will work best.

(This is for Bambu Studio. Most slicers should be similar)

**Infill %:** 15%

**Infill Type:** Gyroid

### Orientation

Look at the screenshots below to understand how to correctly orient all the parts on your build plate while it is printing to avoid problems.


**Case_Top**

<img width="998" height="709" alt="Screenshot 2026-11-19 at 8 34 02 PM" src="https://github.com/user-attachments/assets/04c497da-3eb0-43b4-b2dc-2d7ee2d705a5" />

---

**Case_Bottom**

<img width="1011" height="729" alt="Screenshot 2026-11-19 at 8 34 23 PM" src="https://github.com/user-attachments/assets/b9a6d581-5dfd-49e4-a415-4bff6106d20d" />

---

**Battery_Case_Lid01**

<img width="381" height="453" alt="Screenshot 2026-11-19 at 8 35 00 PM" src="https://github.com/user-attachments/assets/495d8452-3dcd-472f-8db8-01127683f82f" />

---

**Battery_Case_Lid02**

<img width="381" height="453" alt="Screenshot 2026-11-19 at 8 35 19 PM" src="https://github.com/user-attachments/assets/c2b89aef-44b3-4c99-9bcd-40e863cccd34" />

---

**Battery_Case_Bottom**

<img width="487" height="470" alt="Screenshot 2026-11-19 at 8 35 33 PM" src="https://github.com/user-attachments/assets/82d6993c-f43f-45ce-a5bc-ed08bafd7669" />

---

**PCB_Holder**

<img width="604" height="511" alt="Screenshot 2026-11-20 at 8 35 30 PM" src="https://github.com/user-attachments/assets/928b0467-08da-406c-a358-7f8828bfb7ba" />

</details>

---

<details>
<summary><h2 id="additional-info">Additional Information</h2></summary>

Powered by two AAA batteries. The battery compartment has to be ordered, while there is a 3d printed battery holder that holds the battery compartment in place. There is also a PCB holder, which holds the PCB in place. Both the holders snap into the main bottom part of the case. 

The battery holder has a lid, which is divided into 2 parts. The two parts snap together, and the whole lid also snaps to the battery holder.

The top part of the case uses screws to stay on the bottom part of the case. Heat-set inserts are installed to allow screws to be used.

<details>
<summary><strong>Dimensions</strong></summary>

- The whole case is approximately (to the nearest mm): 132mm x 114mm x 31mm
- The PCB is 81mm x 57mm

</details>

<details>
<summary><strong>Details about the case</strong></summary>

There are four magnets in the back of the case. These magnets will be used to attach the remote to the desk fan for easy access.

The case has five rectangular slots in the bottom. This will be used as an alternate way from the magnets, to keep the ir remote more secure.

</details>

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
- Most components will be soldered to the PCB, while others will have wires connecting them.

</details>
</details>

---

<details>
<summary><h2 id="credits">Credits</h2></summary>
The case was modeled completely in Onshape. 
</details>
