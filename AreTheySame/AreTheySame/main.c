#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


/*/
My answer:

bool comp(int *a, int *b, size_t sizeArray)
{
	if (sizeArray == 0 || sizeArray == 0)
		return false;

	for (int k = 0; k < sizeArray; k++)
	{

		for (int i = 0; i < sizeArray; i++)
		{
			if (a[k] == sqrt(b[i]))
				tempVal1 = 1;
			else
				tempVal1 = 0;
			printf("%d", tempVal1);
		}
	}
	for (int k = 0; k < sizeArray; k++)
	{
		for (int i = 0; i < sizeArray; i++)
		{
			if (b[k] == (a[i] * a[i]))
				tempVal2 = 1;
			else
				tempVal2 = 0;
			printf("%d", tempVal2);
		}
	}

	printf(" tempval1 : %d\n", tempVal1);
	printf(" tempval2 : %d\n", tempVal2);

	if (tempVal1 * tempVal2)
		return true;
	return false;
}

*/

/*/
	Stackoverflow answer:

*/
bool comp(const int *a, const int *b, size_t sizeArray) {
	for (size_t k = 0; k < sizeArray; k++) {
		size_t i;
		for (i = 0; i < sizeArray; i++) {
			long long aa = (long long)a[i] * a[i];
			if (aa == b[k]) {
				break;
			}
		}
		// Since the loop did not exit early, no match was found, return fasle
		if (i == sizeArray) {
			return false;
		}
	}

	for (size_t k = 0; k < sizeArray; k++) {
		size_t i;
		for (i = 0; i < sizeArray; i++) {
			long long aa = (long long)a[k] * a[k];
			if (aa == b[i]) {
				break;
			}
		}
		// Since the loop did not exit early, no match was found, return false
		if (i == sizeArray) {
			return false;
		}
	}

	return true;
}int main() {

	bool result;
	int a[8] = { 121, 144, 19, 161, 19, 144, 19, 11 };
	int b[8] = { 121 * 121, 144 * 144, 19 * 19, 161 * 161, 19 * 19, 144 * 144, 361, 11 * 11 };
	result = comp(a, b, 8);
	printf("%d\n", result);
}
