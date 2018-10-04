#include <stdint.h>
#include<stdio.h>
#include <string.h>
#include <malloc.h>
/*/
Write a function called repeatStr which repeats the given string string exactly n times.

repeatStr(6, "I") // "IIIIII"
repeatStr(5, "Hello") // "HelloHelloHelloHelloHello"

*/


char *repeat_str(size_t count, const char *src) {

	char *result = malloc(strlen(src));
	result[0] = 0;
	for (int i = 0; i < count; i++)
	strcat(result,src);
	return result;
	}


int main()
{
	size_t count = 6;
	const char *str = "Hello";
	char *result_f = repeat_str(count, str);
	printf("%s",result_f);
	

	return 0;
}