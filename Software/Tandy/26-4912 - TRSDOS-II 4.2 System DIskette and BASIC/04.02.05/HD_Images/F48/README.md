# F48 (FreHD4Eight)

This folder contains a hard4-0 file containing TRSDOS-II Version 4.2.5 for use on the FreHD4Eight hard drive emulator.  It's assumed that your F48 is connected to your 8" system and is ready to go.

## To Use

To use this disk image:

1. Copy this **hard4-0** file to the root directory of your FreHD's SD card.  Ensure it retains the filename **hard4-0**. 
1. Insert the SD card into your F48.
1. Apply power to the F48 and wait for F48 to flash its activity LED once.  If the light doesn't flash or is steady-on, check the image name and location and restart your F48.
1. Power on your Big Tandy.
1. Enjoy!

## Disk Geometry

The disk image was formatted with the following geometry:

* Cylinders: 800
* Heads: 8
* Sectors/track: 17
* Interleave: TRSDOS-II Default

## Additional Information

This image was created using the trs80gp emulator from a **unformatted hdv** image.  Cylinders, heads, and interleave were specified via TRSDOS-II's format command.
