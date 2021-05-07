//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	    "bar-mail",     0, 	                10              },
	{"",	    "bar-server",   600,	            9               },
	{"",	    "bar-volume",   0,	                8               },
	{"",	    "bar-internet", 0,	                7               },
	{"",	    "bar-vpn",      0,	                6               },
	{"",	    "bar-mem",      5,	                5               },
	{"",	    "bar-cpu",      5,	                4               },
/*	{"",	    "bar-battery",  180,	            3               },*/
	{"",	    "bar-weather",	600,	            2               },
	{"",	    "bar-lang",     0,	                3               },
	{"",	    "bar-clock",	60,	               1               },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
