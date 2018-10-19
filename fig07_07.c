//Cube a variable using pass-by-reference with a pointer argument


#include <stdio.h>
#include <stdlib.h>


void cubeByReference(int *nPtr);

int main(void)
{
  int number  = 5;
  printf("The original value of number is %d",number);
  cubeByReference(&number);
  printf("\nThe new value of number is %d\n",number);

}

void cubeByReference(int *nPtr){

  *nPtr = *nPtr * *nPtr * *nPtr;  // cube of *nPtr thus cube of number

}
