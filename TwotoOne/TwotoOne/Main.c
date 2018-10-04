#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longest(char* s1, char* s2)
{
	printf("str1 = %s\nstr2 = %s\n", s1, s2);
	char *result = (char *)malloc(27);
	int i = 0;

	for (char c = 'a'; c <= 'z'; c++)
	{
		if (strchr(s1, c))
		{
			printf("s1 sonucu : %d\n", *strchr(s1, c));
			result[i] = c;
			i++;
			continue;
		}
		if (strchr(s2, c))
		{
			printf("s2 sonucu : %d\n", *strchr(s2, c));
			result[i] = c;
			i++;
		}
	}
	result[i] = 0;

	puts(result);

	return result;
}

int main() {

	longest("abckl", "s2123");

}