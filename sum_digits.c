#include <stdlib.h>
#include <stdio.h>

int min , max;
int s1[] = { 6, 2, 1, 8, 10 };
int findMaxMin(int* numbers, int numbersCount){

  min = s1[0];
  max = s1[0];

  for (int i = 0; i < numbersCount; i++) {
    /* code */
    if(s1[i] > max)
      max = s1[i];
    if(s1[i] < min)
       min = s1[i] ;
  }
  return min + max;

  printf("%d\n",min + max );
}

int sum(int* numbers, int numbersCount)
{
  int sum;
  for(int i = 0; i < numbersCount; i++)
   { sum = sum + numbers[i];

      //printf("%d\n",sum);
  }
  return sum;
}


void main(/* arguments */) {
  /* code */


int sumOfArray = sum(s1,5);
printf("%d\n",sumOfArray);
int maxAndmin = findMaxMin(s1,5);
printf("%d\n",maxAndmin);

int result = sumOfArray - maxAndmin;
printf("%d\n",result );


return 0;
}
