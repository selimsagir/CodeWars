//Cube a variable using pass-by-value

#include <stdio.h>

//prototype

int cubeByValue(int n);

int  main(void) {
  /* code */
  int number = 5;
  printf("The original value of number is %d",number);
  number = cubeByValue(number);
  printf("\nThe new value of number is %d\n",number);

  return 0;
}

int cubeByValue(int n){

  return n*n*n;

}
