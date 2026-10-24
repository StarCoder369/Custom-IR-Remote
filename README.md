# Custom-IR-Remote

An IR remote with a custom pcb, containing 7 buttons, meant to work with a custom desk fan.


## BOM (Bill of Materials)

> These are estimated prices, the final prices may be different
> Currently, the price to 3D print the case is not factored
> Everything below might change

> Reference number are the ones in the schematic.
> IN PROGRESS


| **Ref.** | **Component**                 | **Exact Part**          | **Qty** | **Type**     | **Est. Total Cost** | **Kicad Footprint**                                           | **Supplier/Purchase Link**                                                                                                                                                                                                                                                                                 | **Purpose/Notes**                                                                                   |
|----------|-------------------------------|-------------------------|---------|--------------|---------------------|---------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------|
| U1       | Microcontroller               | MicrochipATtiny1616-S   | 1       | Solder       | $1.16               | Package_SO:SOIC-20W_7.5x12.8mm_P1.27mm                        | [DigiKey](https://www.digikey.com/en/products/detail/microchip-technology/ATTINY1616-SN/10231345?gclsrc=aw.ds&gad_source=1&gad_campaignid=20790518593&gbraid=0AAAAADrbLljM6GxGvRl7-2G9TBt4i-OXL&gclid=CjwKCAjwi-zWBhAdEiwAqlRf-EygoNddCmALjr8i82Xuxs25xnLS4NE329Q1yVUe1apmqWVAHRll5xoCatQQAvD_BwE)         | Runs the firmware, reads buttons, generates IR signals. SOIC pins are soldered on pcb surface pads. |
| D1       | IR LED                        | Vishay TSAL6200, 940 nm | 1       | Through-Hole | $0.50               | LED_THT:LED_D5.0mm                                            | [DigiKey](https://www.digikey.com/en/products/detail/vishay-semiconductor-opto-division/TSAL6200/1681339?gclsrc=aw.ds&gad_source=1&gad_campaignid=20228387720&gbraid=0AAAAADrbLliNGTjDmvi36_Q-MRvV1ijCc&gclid=CjwKCAjwi-zWBhAdEiwAqlRf-DyOax2C-a4FzVuQMSiwmjW14pHEv-Ghv_gznsjcCdGDOqNPgJIj0BoCGIAQAvD_BwE) | Transmits commands to the fan.                                                                      |
| Q1       | NPN Transistor                | BC547B                  | 1       | Through-Hole | $0.14               | Package_TO_SOT_THT:TO-92_Inline                               | [DigiKey](https://www.digikey.com/en/products/detail/diotec-semiconductor/BC547B/13164496)                                                                                                                                                                                                                 | Switches current through the IR LED.                                                                |
| R1       | LED current-limiting resistor | 47Ω, 1/4W, Axial        | 1       | Through-Hole | $0.10               | Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal | [DigiKey](https://www.digikey.com/en/products/detail/yageo/MFR-25FTE52-47R/9140228)                                                                                                                                                                                                                        | Limits IR LED current.                                                                              |
| R2       | Transistor base resistor      | 330Ω, 1/4W, Axial       | 1       | Through-Hole | $                   | Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P7.62mm_Horizontal |                                                                                                                                                                                                                                                                                                            |                                                                                                     |

