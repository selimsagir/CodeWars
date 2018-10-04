#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_valid(char* str)
{
	if (str == 0)
		return false;

	int alphabetSet[26] = { 0 };
	int strLength = strlen(str);
		printf("alphabetSet : %d\nlenght : %d\n", alphabetSet,strLength);

	//a = 97
	for (int i = 0; i < strLength; i++) {
		if (str[i] < 97 || str[i]>122)
			return false;
		alphabetSet[(str[i]) - 97] += 1;
		printf("%d", alphabetSet[i]);
	}
	int tmpVal = 0;
	int numberOfDiffCharCount = 0;
	for (int i = 0; i < 26; i++) {
		if (alphabetSet[i] != 0) {
			if (tmpVal != alphabetSet[i] && tmpVal != 0) {
				numberOfDiffCharCount++;
				// different value
			}
			tmpVal = alphabetSet[i];
		}
	}
	if (numberOfDiffCharCount <= 1) {
		return true;

	}
	return false;


}


int main()
{

	bool test = is_valid("accenture");

	printf("\n%d", test);

}


