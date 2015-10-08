
Readme created by Kevin (va3rca@yahoo.ca) Sept 25, 2015

These game disks were purchased from eBay in 2010

This collection contains many excellent text games for TRS-Xenix.
It contains games like Hack, Nethack, Wheel of Fortune, and many others.

I have successfully installed from these disks and run these programs under TRS-Xenix 3.2.
It is required that the development system disks be installed I believe to provide for the tar command.
I have never been able to get any of the BASIC programs in this collection to run.  
If you find the answer to this I would appreciate an email.

1) Command to display the directory listings on the disks: tar tvf /dev/fd0 

2) To extract the files from the disks: tar xtvf /dev/fd0

(I believe it will default to extracting all files to /usr/games )

3) I found that I had to give users write permissions to /usr/games if I wanted non root accounts to execute them,

4) I believe I had troubles caused by not giving TRS-Xenix enough swap space when I installed Xenix. 
I had to reformat the disk and re-install TRS-Xenix from scratch to specify a larger swap space.

5) When I tried to execute the larger programs I would get the error: KILLED
The problem is that the default for TRS-Xenix is to allow single processes only up to 256K of memory.

I found the solution to the problem here: https://groups.google.com/forum/?hl=en#!topic/comp.sys.tandy/NHw0mRMeQjQ

Solution (2a) strangely did not work for me but (2b) did.  

Excerpt from that web page is provide here:

---------------------------------------------

To raise the process size limit:

(1) Decide on the limit you want.  Find the "user memory" number
displayed when you boot up (copies are also present in /usr/adm/messages).
Also find your current swap space, also displayed on bootup.  
The maximum process limit you can have is the user memory displayed MINUS
4k.  Note that this number changes with the amount of installed memory
and kernel configuration parameters.  If you set the amount higher and
a process tries to get exactly the amount listed as user memory (in
4k chunks), some versions will hang the system.  Others will just
deny the request.  

You should have at least 2, and preferably 3 or 4, times the maximum
process size in swap space.  If you have a lot of users logged in
simultaneously, you should have more swap space, especially if they
will be running big processes.  If you have a process half the size of
swap space, and one other process, like init, you could run the system
out of swap space if init happens to land in a bad place (the middle)
of swap space.  Unfortunately, changing swap space involves saving
off the entire root partition and restoring it with the File Maintenance
disk, which gives you a chance to change the swap space size.  I
will not go into details of this.

Let's suppose your user memory is 800k, your swap space is 2000k,
and you decide to go for the max at 796k.  (swap/process max = 2.5,
which is a bit tight.  Don't run many big processes at once.)

(2a) for 3.2 systems, as root:

# /etc/cfg maxmem=796
#
(note that changing other parameters with /etc/cfg may affect available 
user memory, which may affect your choice of a process size limit.
To see the limit to be used on the next reboot, just run /etc/cfg with 
no parameters.)

OR
(2b) for any system, as root:

# adb -w /xenix
_Maxmem?W 796
^D
#

To view the limit:
# adb /xenix
_Maxmem?D
^D
#

(3) Shut down the system and reboot to make the change take effect.

                                        Gordon L. Burditt
                                        sneaky.lonestar.org!gordon