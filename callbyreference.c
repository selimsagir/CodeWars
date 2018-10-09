#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
It's pretty straightforward. Your goal is to create a function that
removes the first and last characters of a string.
You're given one parameter,
the original string. You don't have to worry
with strings with less than two characters.


*/


char* remove_char(char* dst, const char* src)
{
	/* your solution should return the string even if you use dst */
	char *final_src = (char*)malloc(5*sizeof(char));
	int len = strlen(src); //ok
	for (int i = 1; i < (len-1); i++)
	{
		// *src  selim
		// src   adress
		*final_src = src[i];
		final_src++;
    printf("%c\n", *final_src);
    printf("%c\n", src[i]);
	}

		//printf("%s", *final_src);


}




void main()
{

	char s1[] = "selim";

	remove_char( "0", s1);




}
