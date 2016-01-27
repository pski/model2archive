M2File.exe
Model II Extract files from disk image
Win32 Program
v1.0.11.243  ©2012-16 Aaron Brockbank

Usage:
M2FILE A:|B:|filename.[dmk|imd|td0|dsk] [/LO]

A:|B: reads from a physical 8in disk via FDRAW.SYS.
filename.[dmk|imd|td0|dsk] reads from a disk image.

/LO will display the directory, with no file extraction.

M2FILE loads then extracts files from Model II/12/16/6000
8in disks in ATON, FMG, P&T CP/M System, LS-DOS 6.3.1A,
DOSPLUS II A.0x, TRSDOS (1.1), 1.2x, 2.0x, and 4.x,
Racet-HSDS, Corvus, Xenix TAR and UCSD Pascal formats.

BAS files will be expanded back to ASCII format,
the contents of Scripsit disks will be extracted
to TXT, Visicalc spreadsheets to CSV, and Profile II
Databases back to ASCII files."


The DSK input, TRSDOS II x.x and Xenix formats are experimental at the moment, as the TRSDOS II x.x directory is quite the exercise to reverse engineer.