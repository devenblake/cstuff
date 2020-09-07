/*
	ASCII.C coded by DEVEN BLAKE 2020
	PUBLIC DOMAIN

	should be valid ANSI C89. tested on debian.

	Usage:
		./a.out [min] [max]
		prints all text values between and including min and max.

		./a.out [value]
		prints the text value of value.

		./a.out
		prints the text values between and including 32 (' ') and 127
		('~'), the printable values in the ASCII range.

	Sample output:
		> ./a.out 49 51
		DEC	HEX	OCT	CHAR
		49	31	61	0
		50	32	62	1
		51	33	63	2
*/

#include <stdio.h>
#include <stdlib.h>
/*           V-- change this to change the printf format */
#define HEAD "DEC\tHEX\tOCT\tCHAR\n"
#define FORM "%d\t%X\t%o\t%c\n"

int main(int argc, char *argv[]) {
	int min, max;
	if(argc > 1)	min = atoi(argv[1]);
	else		min = 32; /* ' ' */
	printf(HEAD);
	if(argc == 2)	printf(FORM, min, min, min, min);
	else {
		if(argc == 3)	max = atoi(argv[2]);
		else		max = 127; /* '~' */
		for(int i = min - 1; i < max;)	printf(FORM, i, i, i, i++);
	}
	return 0;
}