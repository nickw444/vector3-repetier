# Eaglemoss Vector 3 3D Printer Repetier Firmware Configuration

In this repository you will find:

* [Repetier Firmware configuration](repetier/Configuration.h) for this printer
* [Repetier Firmware patch](repetier/bluetooth-serial.diff) to enable IO on UART1 for a Bluetooth interface
* [Textual description of printer settings](Repetier-Host/printer-settings.md) for this printer within Repetier Host
* [Configuration for PrusaSlicer](PrusaSlicer/PrusaSlicer_config_bundle.ini)

This is not my own printer, but rather I spent some time configuring it for a friend.

## Resources used

* [smalcolmbrown/V3-Sprinter-Melzi_1_01](https://github.com/smalcolmbrown/V3-Sprinter-Melzi_1_01) firmware rewrite
* [Vector3 Wire List](https://v3uc.com/assets/Vector_3D_wire_list.pdf)
* [Vector3 User Community Forums](https://v3uc.com/)

## Why Repetier Firmware?

Good question... 3D printing is a very new world for me, having absolutely zero experience. When
I first began working with this printer, I was having consistent connection issues both during 
prints and during initial connection negotiation with the printer. I wanted to try alternative 
firmware to see if the firmware was the issue. 

My first attempt was to use [smalcolmbrown/V3-Sprinter-Melzi_1_01](https://github.com/smalcolmbrown/V3-Sprinter-Melzi_1_01) 
rewrite of the stock firmware. However, whilst using this firmware I continued to have intermittent 
connection issues both during printing and whilst connecting.

I looked around and compared different open source firmware's available. I considered the following:
 
* [RepRap Firmware](https://github.com/Duet3D/RepRapFirmware): Configuration tool didn't appear to
  support Sanguinololu out of the box.
* [Marlin Firmware](https://marlinfw.org/): Very complicated Configuration.h without an official 
  configuration tool
* [Repetier Firmware](https://www.repetier.com/documentation/repetier-firmware/): Less complex 
  Configuration.h albeit less documentation, however has an official configuration tool supporting 
  Sanguinololu out of the box.

Repetier was straightforward enough to configure and flash to my controller via USB.

## Issues I encountered along the way (and a tldr of the solution)

* Legacy bootloader meant I had to modify boards.txt to support slower bootloader baud rate:
    * Connect ISP programmer (Arduino Uno as ISP) and flash MightyCore as bootloader
* Inaccurate X/Y dimensions on prints
    * Check belts are tight (mine were loose)
    * Adjust X/Y steps per mm if confirmed that belts are tight and not slipping
* Unrecoverable timeouts during printing
    * Replace stock firmware with Repetier and add HC-06 Bluetooth serial

## Features

- [x] X/Y/Z End stops distance
- [x] X/Y/Z Speed & Acceleration
- [x] Thermister calibration
- [x] Heating element
- [x] Heading bed
- [x] Cooling fan control: https://v3uc.com/forums/topic/cooling-fan-issue-91/ - ensure switch 
      on extruder board is in correct position
- [x] PID temperature control for extruder, specifically I-gain to keep setpoint during printing

### Unsupported 

- [ ] Hood Switch: Not possible. controlled via i2c on the daughter board.
- [ ] Extruder LED: Not possible. controlled via i2c on the daughter board.
- [ ] Front button: Not possible. controlled via i2c on the daughter board.
- [ ] Front button LED: Not possible. controlled via i2c on the daughter board.

## Bed Adhesion Hacks

Bed adhesion is quite tricky on this machine (or perhaps my lack of 3D printing experience is to 
blame) here. However, I have found that I can improve bed adhesion with the following:

* Use masking tape to cover the bed
* Ensure bed is completely flat (duh) and printer height correctly set
* Slow down first layer when printing - 20mm/s first layer speed seems to help
* Prime the extruder prior to printing using custom G-code

### Filament Start G-code

```
G1 E15 F100 ; prime/extrude 15mm into dump area
G92 E0 ; reset extruder
```

### Printer Start G-code

```
G28 ; home all axes
G1 X140 Y0 Z2 F5000 ; lift nozzle 2mm and go to dump area
```

Pre-configured PrusaSlicer configuration can be found in the [PrusaSlicer](PrusaSlicer) directory.

### Things I Did

* Attempted re-flash of [unofficial upgrade of stock FW](https://github.com/smalcolmbrown/V3-Sprinter-Melzi_1_01)
    * Experiencing drop out and pausing during printing
    * Annoying to re-flash as have to use an old version of Arduino
    * Managed to calibrate X/Y/Z axis
        * In retrospect this calibration was unnecessary, the underlying issue was loose belts
* Attempted re-flash of [Repetier-FW](https://www.repetier.com/documentation/repetier-firmware/)
    * Compiled using Arduino V1.8.12 against [Sanguino](https://github.com/Lauszus/Sanguino), makes dev loop easier for tweaking
    * Due to legacy bootloader, have to manually change boards.txt to support firmware flash at 57600 baud.
    * Slightly better in terms of reliability. 
    * Still experiencing drop outs and pausing during printing
    * Flaky connection, does not connect with my Macbook Pro
    * Adjusted baud to 57600 with no success
* Upgraded bootloader to [MightyCore](https://github.com/MCUdude/MightyCore), re-flashed with Arduino UNO as ISP Programmer
    * Brown out detection @ 4.7V (guess)
    * 16MHZ External Clock
    * Sanguino Pinout
    * Can now flash without legacy baud change in boards.txt
* Compiled Repetier against [MightyCore](https://github.com/MCUdude/MightyCore) (instead of [Sanguino](https://github.com/Lauszus/Sanguino))
    * Drop outs seem to have decreased.
    * Initiating a connection is near instant
    * Macbook Pro able to connect immediately
* Re-flashed bootloader and disabled BOD to ensure this was not contributing to drop-outs.
    * Drop outs still occurring.
* Disable firmware watchdog timer
    * Drop outs still occurring.
* Re-built printer
    * Removed unused daughter board to front power LED + button
        * Might try to figure out how to add an I2C display + connect buttons directly to main board.
    * Improved internal cable management, moving USB cable away from power
    * Tightened belts on X/Y axis. Y axis was loose, no wonder it needed adjustment. 
* Print dry-run x3 15 minute prints without dropped connection, but still occasional dropout being encountered
    * Might be good enough? Long prints probably won't be possible.
    * Power quality issue in our apartment building? Florescent lights on the same circuit?
* Modify firmware and connect via Bluetooth
    * See [repetier/bluetooth-serial.diff](repetier/bluetooth-serial.diff) for patch applied to 
      Repetier 1.0.3. [Source](https://forum.repetier.com/discussion/5317/second-uart-for-bluetooth-isnt-working-after-upgrade-from-0-9-2-to-1-0-1)
    * Recompiled
        * Re-enabled watchdog
    * Bluetooth connection appears more reliable than USB for printing
