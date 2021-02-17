//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	    "bar-mail",     0, 	            3               },
	{"",	    "bar-server",   600,	            4               },
	{"",	    "bar-volume",   0,	                5               },
	{"",	    "bar-internet", 0,	                6               },
	{"",	    "bar-vpn",      0,	                2               },
	{"",	    "bar-mem",      5,	                7               },
	{"",	    "bar-cpu",      5,	                8               },
/*	{"",	    "bar-battery",  180,	            9               }, */
	{"",	    "bar-clock",	60,	                10              },
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
