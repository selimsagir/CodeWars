#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *a[] = { 1, 2, 3 };
	int b[] = { 1, 2, 3 };
	int c = 4;
	deneme(a, b, &c);


}

int deneme(int *a, int b[], int *c)
{
	int d;
	d = a[0];
	d = *a;
	d = b[0];
	d = *c;

}
