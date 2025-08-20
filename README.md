# Volt2Deg Project

In this example, an analog voltage with a range from 0.000-9.000V is converted to a digital value.  The digital value is displayed on four seven segment LED displays as an angle from 0.00 to 90.00 degrees.

To accoplish this, an ATtiny3227 works in conjunction with a MCP3204 which is a 12 bit, 4 channel A/D converter connected via SPI.  The four seven segment LED displays are connected to the ATtiny3227 via two serial shift registers.

The code needs to initialize the MCP3204.  Read a sample every 100mS and update the display with the new value.

## Connections

Using the ATtiny3227 Curiosity Nano on the Curiosity Nano Base, three Click boards are connected.  One contains the MCP3204 and the other two contain two seven segment displays each.

### MCP3204

Located in mikroBus Socket 1, the MCP3204 is connected via the following pins:

| Signal | ATtiny3227 pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| CS     | PC3            | CS1              |
| SCK    | PC0            | SCK              |
| DOUT   | PC1            | MISO             |
| DIN    | PC2            | MOSI             |

### 7seg Click #1

Located in mikroBus Socket 2, the serial shift register is connected via the following pins:

| Signal | ATtiny3227 pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| MR#    | N/C            | RST2             |
| LATCH  | PC4            | CS2              |
| SCK    | PC0            | SCK              |
| SDO    | PC1            | MISO             |
| SDI    | PC2            | MOSI             |

### 7seg Click #2

Located in mikroBus Socket 3, the serial shift register is connected via the following pins:

| Signal | ATtiny3227 pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| MR#    | N/C            | RST3             |
| LATCH  | PC5            | CS3              |
| SCK    | PC0            | SCK              |
| SDO    | PC1            | MISO             |
| SDI    | PC2            | MOSI             |
