Utilities for File Transfer to/from Xenix

Use these utilities to copy files between your PC and your Xenix machine.  

You will need the following:

1. A serial terminal emulator with at least support for kermit file transfer.
2. A working Tandy Xenix 1 or 3 installation.
3. The Xenix Software Development kit installed.

The Short Approach

So, uuencode kermit, transfer using ASCII protocol, uudecode, and then use kermit to transfer files. 
For Xenix 3, build rz/sz and zoo and you now have a newer transfer program and an archiving program.

The Detailed Steps

1. UUENCODE kermit on your PC/Mac
	e.g Mac: uuencode kermit kermit > kermit.uu
2. Transfer kermit.uu to Xenix using ASCII protocol
        a. cat > kermit.uu
	b. send file from terminal as text/ascii
	c. ctrl-d
3. If your Xenix installation has uudecode, ie. Xenix 3, then goto Step 6
4. Transfer uudecode.c to Xenix using ASCII protocol.
5. cc -o uudecode uudecode.c
6. uudecode kermit
7. For Xenix 1, you are done.  Use kermit for your file transfers.
8. kermit -r
9. Send zoo.tar using kermit protocol (Xenix 3 only)
10. Send rzsz.tar using kermit protocol (Xenix 3 only)
11. Use zoo to compress/decompress files and rz/sz to transfer files using ZMODEM protocol
*zoo and rz/sz will only compile and work under Xenix 3



Inventory

kermit - Xenix executable that implements the kermit protocol
kermit.uu - uuencoded form of kermit
rzsz.zip - source code for rz and sz programs. Binary tansfer of files to/from Xenix over a serial port. Unzip, transfer source and use makefile.
Zoo210.tar - source code for zoo archiving program. Precursor to pkzip.
zoo201.exe - self extracting archive of zoo program for dos.
uue.zip - uuencoder and decoder for dos.
rzsz.tar - tar archive of rzsz. May be easier to transfer.
uudecode.c - source code for a simple C uudecoder program
