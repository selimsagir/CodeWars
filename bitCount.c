#include <stdio.h>
#include <stdlib.h>
int count = 0;

size_t countBits(unsigned value){

    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = value >> i;
        if (k & 1){
          count++;
          printf("1");
        }

        else
            printf("0");
    }
    return count;
}

int main(void){

  int count = countBits(4);
  printf("\n%d\n",count);
  return 0;
}
