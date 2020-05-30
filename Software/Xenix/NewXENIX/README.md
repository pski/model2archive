# New XENIX Files
| File            |        Size | Description        |
|:----------------|------------:|:-------------------|
| chown.tar.gz | 9,049 | Port of BSD chown, which can change owner and group\
simultaneously, and can recursively change directory trees.  Its usage looks\
like this:<br><nobr>&nbsp;&nbsp;&nbsp;usage:chown[-R] user[.group] file ...</nobr> |
| games.tar.gz | 1,789,067 | From the README:<tt><br>These games are an\
amalgamation of various XENIX games disks, as well as some stuff off the\
internet that have been ported by me because I remember having fun playing\
them.  To be able to play some of the games, you may need to use cfg to\
increase maxmem larger than the default 256k. You will note that UID 11 and\
GID 11 own everything on this archive. These games were setup to have a\
games owner and games group.  The reason is some of the games need setgid\
and some need setuid. Set them up like this:<br><br>\
&nbsp;&nbsp;/etc/passwd: <nobr>games:NOLOGIN:11:11:Owner of Games:/usr/games:</nobr><br>\
&nbsp;&nbsp;/etc/group: <nobr>games:<nobr>x:11:games</nobr></nobr><br><br>\
I fixed the scoreboard problem with nethack!  It had a Y2K bug that corrupted\
the entries in the scoreboard.<br><br>\
I have added documentation where I had it or could find it.  It is\
pre-formatted and is all in /usr/games/Help.  The directory /usr/games/Doc\
has the man page source when available; you'll note that not all games' help\
files are man pages, some are just text files.  I have also added a new command\
for getting games help, /usr/games/ghelp.  It works much like the XENIX help\
command does, except there are no sections.<br>\
The games provided with this file are unsupported and undocumented.  They\
are provided as-is without any warranty whatever, and nobody accepts any\
liability for unintentional or malicious damage caused by use of them.\
Do not use the games while running with root privileges.<br><br>\
The games do have bugs in them. For instance, if you run adventure through\
too many save/restore game cycles, you will run out of memory.  One will\
probably work, 10 might work, 20 is iffy, and 1,000 will cause problems.\
(An adventure "saved game" is an executable file which you run to restart\
the game.) |
| gcc&#8209;1.24.tar.gz | 305,733 | A gcc that works on XENIX; I believe this
was ported by Gordon L. Burditt.<br>
<b>Warning:&nbsp;</b>You will need to use cfg and set maxmem as high as
<b>3072k</b>for it to work. (I had to set it to 3072k to be able to compile
vim 4.5.) |
| gzip.tar | 34,442 | This is gzip and gunzip for XENIX.  Lets you uncompress 
the other files.  'nuff said. |
| Help&#8209;cfg&#8209;adj_clock.tar | 17,408 | I recreated the missing 
manual pages for those two new admin commands, cfg and adj_time, from the
scanned versions (I wrote new roff source in man format and then formatted
them for use by help).  On cfg's page I went a little further and brought it 
up-to-date with the current cfg. |
| rcs&#8209;5.7.tar.gz | 337,710 | I ported RCS v5.7 to XENIX so that I can 
use it for new stuff I make, and so all the stuff from the Frank Durda Archives
can be looked at on a XENIX system. |
| vim&#8209;4.5.tar.gz | 491,355 | I really, really missed VIM's ability to 
have multi-windows in a VI session when I started using XENIX again, which
only had vanilla vi. So, I went back a ways and found a copy of vim's 4.5
source hoping it'd be close enough for porting.  It took a couple of weeks,
but I got it working!!!<br>
<b>Note:</b>You <u>will</u> need to use cfg to set maxmem to a minimum of
1024k for it to work. |
