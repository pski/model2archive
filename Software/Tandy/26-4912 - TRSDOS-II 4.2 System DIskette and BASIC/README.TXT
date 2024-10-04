TRS-80 Model 12/16/16B/6000
26-4912
TRSDOS-II

Supports Tandy hard drives

Will run on the Model II/16 with additional 16K of Z80 memory (found on the HD adapters).

----------------
HARD DRIVE USERS
----------------

If you're planning to use a hard disk (or emulator) with TRSDOS 4.2.x, you must choose the release which corresponds to the controller that is paired with your hard disk.  This is critical for proper operation; you'll likely have issues otherwise.  8x300 (even-numbered) releases of TRSDOS-II prior to 4.2.7 (such as 4.2.6) should work with the 8 Meg system, though one was not available for testing as of this writing.  This will be updated if more information becomes available.

TRSDOS-II release	Controller
----------------------------------------------------
04.02.05		WD1010
04.02.06		8x300

This list breaks down the controllers:

Controller		Found In
-------------------------------------------------------------------------------
8x300			Five, Twelve, Early 15 Meg Primary Drives
				
WD1010			Later 15 Meg Primary Drives
			All 35 and 70 Meg Primary Drives
			Internal 15 MB Controller Board (used in Model 16B-HD and Tandy 6000-HD w/ Internal 15 Meg drives)
			FreHD4Eight (F48)

For external Primary drives, you can identify the controller by removing the top cover of the Primary drive and inspecting the controller board.  If the board spans almost the entire width of the chassis, it's the 8x300 board.  If the board is only half the width of the chassis, it's the WD1010-bsaed controller.  The WD1010 board in external Primary controllers can also be identifed by the "WD1000-TB1" silkscreen on the board.

Be sure all applicable Technical Bulletins have been applied to your controller.