#include <stdlib.h>
#include <stdio.h>

void  main() {
  printf("%10d",rand()%6 );
    for (unsigned int i = 1; i <= 20; i++) {
      /* code */

    //  printf("%10d",1 + rand()%6 );

      if(i % 5 == 0)
      puts("");

    }
}
