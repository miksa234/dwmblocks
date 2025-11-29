//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	    "bar-mail",     5, 	                10              },
	{"",	    "bar-lang",     0,	                11              },
	{"",	    "bar-bluetooth",5,  	            9               },
	{"",	    "bar-volume",   0,	                8               },
	{"",	    "bar-internet", 5,	                7               },
	{"",	    "bar-battery",  180,	            3               },
	{"",	    "bar-mem",      5,	                5               },
	{"",	    "bar-cpu",      5,	                4               },
	{"",	    "bar-vpn",      0,	                6               },
	{"",	    "bar-vpn-clock",1,	                12               },
	{"",	    "bar-clock",	1,	                1               },
	/*{"",	    "bar-weather",	600,	            2               },*/
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "    ";
