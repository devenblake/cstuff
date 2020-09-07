/*
	TRIGRAPHS.C coded by DEVEN BLAKE 2020
	PUBLIC DOMAIN

	should be valid ANSI C89. tested on debian.

	Usage:
		./a.out
		prints all trigraph characters. displays an error if the
		trigraphs are parsed incorrectly by the compiler.

	Why (from the C89 draft specification, section 2.2.1.1):
		All occurrences in a source file of the following sequences of
		three characters (called trigraph sequences[5]) are replaced
		with the corresponding single character.
			??=	#
			??(	[
			??/	\
			??)	]
			??'	^
			??<	{
			??!	|
			??>	}
			??-	~
		No other trigraph sequences exist. Each ? that does not begin
		one of the trigraphs listed above is not changed.
*/

#include <stdio.h>

int main (void) {
	char trigraphs[] = "??=??(??/??/??)??'??<??!??>??-";
	int len = sizeof(trigraphs)/sizeof(trigraphs[0]);
	int retval = 0;
	if(len != 10) {
		printf("Trigraphs are not being parsed properly by the C");
		printf(" compiler.\nTry compiling with `cc trigraphs.c -");
		printf("trigraphs` if you're using the GNU C compiler.");
		retval = 1;
	} else for(int i = 0; i < len;) printf("%c\t", trigraphs[i++]);
	printf("\n");
	return retval;
}
