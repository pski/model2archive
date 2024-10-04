# DREM (8x300 controller)

This folder contains files containing TRSDOS-II Version 4.2.6 for use on the DREM when paired with the 8x300-based hard drive controllers.  Do not use with WD1010-based Primary controllers.  It's assumed that your DREM is connected to your 8" system and is ready to go.  More info on the DREM can be found here: https://www.drem.info/

For external Primary drives you can identify the controller by removing the top cover of the Primary drive and inspecting the controller board.  If the board spans almost the entire width of the chassis, it's the 8x300 board.  If the board is only half the width of the chassis, it's the WD1010-bsaed controller.  The WD1010 board can also be identifed by the "WD1000-TB1" silkscreen on the board.

Be sure all applicable Technical Bulletins have been applied to your controller.

## To Use

To use this disk image:

1. Copy the .dsk and .cfg files in this directory to the root of your DREM's SD card. 
1. Edit your DREM2.INI in the root of your SD card, and find the **\[hard drive 0\]** section.
1. Set **enabled** to **YES**.
1. Set **dsk file** to **512x8_trsdos_426_8x300.dsk**.
1. Save the file.
1. Eject the SD card from your PC and install it into your DREM.
1. Power up the DREM, followed by your 8" system.
1. Enjoy!

## Disk Geometry

Disk geometry is as follows:

* Cylinders: 512
* Heads: 8
* Sectors/track: 17
* Interleave: 7
