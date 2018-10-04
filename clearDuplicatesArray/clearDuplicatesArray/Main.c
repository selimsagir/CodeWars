#include <stdio.h>
#include <stdlib.h>


clearDuplicates(int arr[], int size) {
	int k;
	int i;
	int j;

	printf("\nArray with Unique list  : ");
	for ( i = 0; i < size; i++) {
		for ( j = i + 1; j < size;) {
			if (arr[j] == arr[i]) {
				for (k = j; k < size; k++) {
					arr[k] = arr[k + 1];
				}
				size--;
			}
			else
				j++;
		}
	}
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	
	int c_a;
	int a[8] = { 121, 144, 19, 161, 19, 144, 19, 11 };
	c_a = clearDuplicates(a, 8);
	printf("%d",c_a);
	return (0);
}