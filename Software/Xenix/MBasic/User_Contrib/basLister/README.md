# MBASIC detokenizer (or uncompressor, if you like) utility and support files.
These utilities and files ONLY work on MBASIC for 68000 XENIX.
## Archive files
| File            | Description                  |
|:----------------|:-----------------------------|
| basLister.tar | Tar of the files listed below. |
| basLister-tar.imd.gz | Floppy image containing a tar of the files below. |

## Archive contents
| File            | Description                  |
|:----------------|:-----------------------------|
| README | This file. |
| b68_tokens.txt | This is simply the sorted output of bToknDump and is what I used to create basLister. |
| bToknDump<br/>bToknDump.c | This utility has a hard-coded location in b68k (the MBASIC bToknDump.c executable) where the token table is.  It knows how to decode the table, and outputs the strings and the tokens to which they compress. |
| basLister<br/>basLister.c | The actual uncompression utility.  You can either feed the basLister.c compressed BAS file on stdin, or give it the name of the file to be decompressed.  In either case, the decompressed program is always output on stdout.  So, for example, to get an ASCII version of metric.bas, you'd type one of these:<br/>&nbsp;&nbsp;&nbsp;basLister metric.bas \| tee metric.txt<br/>&nbsp;&nbsp;&nbsp;basLister metric.bas &gt; metric.txt</br>If basList sees a token that it doesn't recognize, in its place it outputs [T:XX] or [T:XXXX], where 'X' is a hex digit.  Take a look at fp.txt for an example of what that might look like; however, note that basLister *does* know how to decode DEFDBL. |
| fp.bas<br/>metric.bas<br/>tokens.bas  | These three BASIC programs are compressed, so you can try the utility out with them.  I used these programs for testing while I was developing basLister. |
