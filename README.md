# Volt2Deg Project

In this example, an analog voltage with a range from 0.000-9.000V is converted to a digital value.  The digital value is displayed on four seven segment LED displays as an angle from 0.00 to 90.00 degrees.

To accoplish this, an ATtiny3227 works in conjunction with a MCP3204 which is a 12 bit, 4 channel A/D converter connected via SPI.  The four seven segment LED displays are connected to the ATtiny3227 via two serial shift registers.

The code needs to initialize the MCP3204.  Read a sample every 100mS and update the display with the new value.

## Connections

Using the ATtiny3227 Curiosity Nano on the Curiosity Nano Base, three Click boards are connected.  One contains the MCP3204 and the other two contain two seven segment displays each.

### MCP3204

Located in mikroBus Socket 1, the MCP3204 is connected via the following pins:

| Signal | PIC32CM-GV pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| CS     | PA02           | CS1              |
| SCK    | PB03           | SCK              |
| DOUT   | PB00           | MISO             |
| DIN    | PB02           | MOSI             |

### 7seg Click #1

Located in mikroBus Socket 2, the serial shift register is connected via the following pins:

| Signal | PIC32CM-GV pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| MR#    | PA11           | RST2             |
| LATCH  | PB15           | CS2              |
| SCK    | PB03           | SCK              |
| SDO    | PB00           | MISO             |
| SDI    | PB02           | MOSI             |

### 7seg Click #2

Located in mikroBus Socket 3, the serial shift register is connected via the following pins:

| Signal | PIC32CM-GV pin | Nano Base Legend |
| ------ | -------------- | ---------------- |
| MR#    | PA19           | RST3             |
| LATCH  | PB14           | CS3              |
| SCK    | PB03           | SCK              |
| SDO    | PB00           | MISO             |
| SDI    | PB02           | MOSI             |
