#include	<stdio.h>
#include	<ctype.h>

/*
	areacode.c
	Translated from AREACODE.MAC.
	Ken Yap (ken@rochester.arpa, ..!rochester!ken).

	Compile: cc -O -o areacode areacode.c
	Run: areacode nnn nnn ...

	Ver 1.4 added new area code (719) for Colorado Springs, Pueblo 
	Colorado which goes into effect march 5th, 1988. Also added new 
	area code (407) for Orlando, West Palm beach Florida.
	3-23-88, Dewey Coffman, Austin, Texas, auscso!dewey


	AREACODE.MAC Ver 1.3 as of November 20, 1984

	Ver. 1.3 added LA suburbs area code 818, added periods to
	messages (why not?), deleted double entry for area code 809,
	removed ungrammatical comma from ASCII string at MSG2: and
	added a space before the `$' in MSG2: so the first space in
	messages could be removed, providing an extra space for text
	without changing the SCAN3: routine's 58-character bias.
	This version provided for M80/L80 devotees courtesy of Irv
	Hoff's XLATE5.COM to prevent undue anxiety trying to find a
	copy of ASM.COM.  It has not been tested, so bug fixes from
	Z80-land are more than welcome. - Bruce Morgen

	Ver. 1.2 added 718 area code for New York City, and fixed bug
	   in area code 604-804 Harry Kaemmerer

	Ver. 1.1 update of area codes for new U.S. areas, Mexico, &
	Eastern Canada. Harvey G. Lord, Storrs, CT 06268

	Ver. 1.0 - January 2, 1981 by Kelly Smith

	AREACODE is used to display the region and state, specified
	by the user...very handy, when someone leaves a area code
	number on a CBBS, but no city or state reference. Simple
	enough to use, just type AREACODE nnn<cr> (where 'nnn' is a
	three digit area  code), and in return, you get a
	geographical region by city(s), and state. Sorry if your
	particular city is not represented, and feel free to add it
	as required...
*/

/*
**	These must be in sorted order because binary search is used
*/

char *areacode[]	= {
"011the International Access Code",
"170Northwest Mexico",
"190Mexico City, Mexico",
"201Hackensack, Morristown, and Newark, New Jersey",
"202Washington, District of Columbia",
"203all regions, Connecticut",
"204Manitoba, Canada",
"205all regions, Alabama",
"206Seattle, Tacoma, and Vancouver, Washington",
"207all regions, Maine",
"208all regions, Idaho",
"209Fresno and Stockton, California",
"212New York City (Manhattan and Bronx) New York",
"213Los Angeles, California",
"214Dallas, Texas",
"215Allentown, Chester, and Philadelphia, Pennsylvania",
"216Akron, Cleveland, Massillon, and Youngstown, Ohio",
"217Casey and Springfield, Illinois",
"218Duluth, Minnesota",
"219Gary, Hammond, Michigan City, and South Bend, Indiana",
"301all regions, Maryland",
"302all regions, Delaware",
"303all regions, Colorado",
"304all regions, West Virginia",
"305Fort Lauderdale, Key West, Miami and Florida",
"306Saskatchewan, Canada",
"307all regions, Wyoming",
"308North Platte and Scottsbluff, Nebraska",
"309Peoria, Illinois",
"312Aurora, Chicago, Elgin, and Highland Park, Illinois",
"313Detroit, Adrian, and Ann Arbor, Michigan",
"314Saint Louis, Columbia, Missouri",
"315Syracuse and Utica, New York",
"316Dodge City and Wichita, Kansas",
"317Indianapolis and Kokomo, Indiana",
"318Lake Charles and Shreveport, Louisiana",
"319Dubuque, Iowa",
"401all regions, Rhode Island",
"402Lincoln and Omaha, Nebraska",
"403Alberta, Canada",
"404Atlanta and Rome, Georgia",
"405Oklahoma City, Oklahoma",
"406all regions, Montana",
"407Orlando, West Palm Beach Florida",
"408San Jose and Sunnyvale, California",
"409Galveston, Texas",
"412Pittsburgh, Indiana, and Rochester, Pennsylvania",
"413Springfield, Massachusetts",
"414Green Bay, Milwaukee, and Racine, Wisconsin",
"415Oakland and San Francisco, California",
"416Toronto and Ontario, Canada",
"417Joplin and Springfield, Missouri",
"418Quebec, Quebec, Canada",
"419Toldeo, Ohio",
"501Arkansas",
"502Louisville, Paducah, and Shelbyville, Kentucky",
"503all regions, Oregon",
"504Baton Rouge and New Orleans, Louisiana",
"505all regions, New Mexico",
"506New Brunswick, Canada",
"507Albert Lea and Rochester, Minnesota",
"509Pullman, Spokane, and Walla Walla, Washington",
"512Austin, Corpus Christi, and San Antonio, Texas",
"513Cincinnati and Dayton, Ohio",
"514Montreal, Canada",
"515Des Moines and Mason City, Iowa",
"516Hempstead, New York",
"517Lansing and Saginaw, Michigan",
"518Albany, Greenwich, and Schenectady, New York",
"519London, Ontario, Canada",
"525the Country and City code for Mexico City, Mexico",
"601all regions, Mississippi",
"602all regions, Arizona",
"603all regions, New Hampshire",
"604British Columbia, Canada",
"605all regions, South Dakota",
"606Ashland and Winchester, Kentucky",
"607Elmira, Ithaca, and Stamford, New York",
"608Beloit and Madison, Wisconsin",
"609Atlantic City, Camden, and Trenton, New Jersey",
"612Minneapolis and Saint Paul, Minnesota",
"613Ottawa, Ontario, Canada",
"614Columbus, Marietta, and Newark, Ohio",
"615Chattanooga and Nashville, Tennessee",
"616Battle Creek, Cadillac, and Grand Rapids, Michigan",
"617Boston, Framingham, and New Bedford, Massachusetts",
"618Alton, Mount Vernon, and Centralia, Illinois",
"619San Diego and the Imperial Valley, California",
"701all regions, North Dakota",
"702all regions, Nevada",
"703Fredericksburg, Roanoke, and Winchester, Virginia",
"704Charlotte and Salisbury, North Carolina",
"705North Bay, Ontario, Canada",
"707Eureka, Napa, and Santa Rosa, California",
"709Newfoundland, Canada",
"712Council Bluffs, Iowa",
"713Houston, Texas",
"714Orange and Palm Springs, California",
"715Eau Claire and Wausau, Wisconsin",
"716Buffalo, Niagara Falls, and Rochester, New York",
"717Harrisburg, Scranton, and Wilkes-Barre, Pennsylvania",
"718New York City (Queens, Brooklyn and Staten Island) NY",
"719Colorado Springs, Pueblo Colorado",
"801all regions, Utah",
"802all regions, Vermont",
"803all regions, South Carolina",
"804Charlottesville, Norfolk, and Richmond, Virginia",
"805Bakersfield, Ventura, and Simi Valley, California",
"806Amarillo, Texas",
"807Thunder Bay, Ontario, Canada",
"808all regions, Hawaii",
"809Bahamas, Bermuda, Puerto Rico, and the Virgin Islands",
"812Evansville, Indiana",
"813Avon Park, Fort Myers, and Winter Haven, Florida",
"814Altoona, Erie, and Punxsutawney, Pennsylvania",
"815La Salle, Joliet, and Rockford, Illinois",
"816Kansas City and Saint Joseph, Missouri",
"817Fort Worth, Temple, and Waco, Texas",
"818the suburban area near Los Angeles, California",
"819Malartic and Western Quebec, Canada",
"901Memphis, Tennesee",
"902Prince Edward Island and Nova Scotia, Canada",
"904Jacksonville, Florida",
"906Sault Ste. Marie, Michigan",
"907all regions, Alaska",
"912Waycross and Savannah, Georgia",
"913Ottawa and Topeka, Kansas",
"914Monroe, Mount Vernon, and Poughkeepsie, New York",
"915El Paso, Texas",
"916Sacramento and South Tahoe, California",
"918Muskogee and Tulsa, Oklahoma",
"919Greenville, Raleigh, and Williamston, North Carolina"
};

char *where(code)
	char		*code;
{
	register int	i, high, low, mid;
	int		strncmp();

	low = 0; high = sizeof(areacode) / sizeof(areacode[0]) - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		i = strncmp(code, areacode[mid], 3);
		if (i < 0)
			high = mid - 1;
		else if (i > 0)
			low = mid + 1;
		else
			return (areacode[mid] + 3);
	}
	return ("not a valid area code");
}

area(code)
	char		*code;
{
	char		*where();

	if (!isdigit(code[0]) || !isdigit(code[1]) || !isdigit(code[2])
		|| code[3] != '\0')
	{
		printf("Area code %s is not a valid area code!\n", code);
		exit(1);
	}
	printf("Area code %s is %s.\n", code, where(code));
}

main(argc, argv)
	int		argc;
	char		*argv[];
{
	if (argc < 2)
	{
		printf("Usage: areacode nnn nnn ...\n");
		exit(1);
	}

	for (--argc, ++argv; argc > 0; --argc, ++argv)
		area(*argv);
}
