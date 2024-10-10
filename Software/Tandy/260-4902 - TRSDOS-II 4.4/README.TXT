TRS-80 Model 12/16/16B/6000
260-4902
TRSDOS-II 
04.04.00

Here are several versions of the unreleased TRSDOS-II 4.4.  They are identified by release dates.

TD44BLNK.HFE - A TRSDOS 4.4 formatted blank SSDD HxC disk image.

----------------
HARD DRIVE USERS
----------------
The HD_Images folder in the 1985-07-31 release contains hard drive images of that release for selected emulators.  TRSDOS-II Version 4.4 supports both 8x300- and WD1010-based controllers (and FreHD4Eight).  

TRSDOS-II Version 4.4 does not support the 8 Meg Disk system.

This list breaks down the controllers:

Controller		Found In
-------------------------------------------------------------------------------
8x300			Five, Twelve, Early 15 Meg Primary Drives.
				
WD1010			Later 15 Meg Primary Drives
			All 35 and 70 Meg Primary Drives
			Internal 15 MB Controller Board (used in Model 16B-HD and Tandy 6000-HD w/ Internal 15 Meg drives)
			FreHD4Eight (F48)

For external Primary drives, you can identify the controller by removing the top cover of the Primary drive and inspecting the controller board.  If the board spans almost the entire width of the chassis, it's the 8x300 board.  If the board is only half the width of the chassis, it's the WD1010-bsaed controller.  The WD1010 board in external Primary controllers can also be identifed by the "WD1000-TB1" silkscreen on the board.

Be sure all applicable Technical Bulletins have been applied to your controller.