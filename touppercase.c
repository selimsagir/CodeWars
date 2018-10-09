#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *sPtr);

void main() {
  /* code */
  char string[] = "SeliM 45aGf!";
  printf("before : %s\n",string );
  convertToUpperCase(string);
  printf("after : %s\n",string );


  return 0;
}


void convertToUpperCase(char *sPtr){
  while(*sPtr !='\0') {
      *sPtr =toupper(*sPtr);
      ++sPtr;
  }
}
