#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*

Task
Given a string str, reverse it omitting all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str

A string consists of lowercase latin letters, digits and symbols.

[output] a string
*/
char *reverse_letter(const char *str)
{

	char *start = str;
	char *end = start + strlen(str) - 1;  //    -1  for  \0 
	char temp;


	//reverse it
		while( end > start )
		{
			temp = *start;
			*start = *end;
			*end = temp;

			++start;
			--end;
		}

}


void main() {

	char s1[] = "123ab6";

	// clear non alphabetic characters 

	char *dst = s1;
	char *src;

	for (src = s1; *src; ++src)
	{

		if (isalpha((unsigned char)*src))
		*dst++ = *src;
	}
	*dst = 0;

	printf("cleaned data : %s\n", s1);
	char final_string = reverse_letter(s1);
	printf("\n%s", s1);
	//printf("%s", final_string);
	//printf("%c", final_string);

	return 0;
}



