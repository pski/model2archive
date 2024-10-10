# DG (WD1010 and 8x300 controllers)

This folder contains files containing TRSDOS-II Version 4.4 for use on the David Gesswein MFM Reader when paired with the 8x300- and WD1010-based hard drive controllers.  **This release is not compatibe with 8 Meg disk systems.**  It's assumed that your DG MFM emulator is connected to your 8" system and is ready to go.  Info on the DG can be found here: https://www.pdp8online.com/mfm

For external Primary drives you can identify the controller by removing the top cover of the Primary drive and inspecting the controller board.  If the board spans almost the entire width of the chassis, it's the 8x300 board.  If the board is only half the width of the chassis, it's the WD1010-bsaed controller.  The WD1010 board can also be identifed by the "WD1000-TB1" silkscreen on the board.

Be sure all applicable Technical Bulletins have been applied to your controller.

## To Use

To use this disk image, follow these instructions.  This assumes familiarity with the DG, familiarity with Linux command line, and that your DG is connected to your LAN. 

1. Power on your DG emulator.  If it's in a Primary Drive enclosure, power it on.
1. Using SCP, copy the **.emu** file here to your desired location on the emulator's filesystem.
1. Obtain a shell on your emulator via SSH and change to the directory where you stored the .emu file.
1. Run **setup_mfm** to configure the emulator.
1. Run **mfm_emu --drive 1 --file 512x8_trsdos_44.emu** to start emulation.
1. Start your TRS-80.
1. The system should boot TRSDOS-II from the emulator. 
1. See the DG MFM emulator documentation to configure it to auto-start with your image.
1. Enjoy!

## Disk Geometry

Disk geometry is as follows:

* Cylinders: 512
* Heads: 8
* Sectors/track: 17
* Interleave: 7

