//Modify this file to change what commands output to your statusbar, and recompile using the make command.

//To send a signal : kill -(34+signal) $(pidof dwmblocks)
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-mailbox",								60,		6},
	{"", "sb-music",								0,		5},
	{"", "sb-volume",								0,		4},
	{"", "sb-internet",								5,		3},
	{"", "sb-battery",								5,		2},
	{"", "sb-date",									60,		1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 1;
