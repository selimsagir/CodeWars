#include <stdio.h>

void print(char *c)
{
  int i =0;
  while(*c != '\0')
  {

    printf("%c",*c);
    c++;
  }

  printf("\n");
}

int main()
{
char *c = "Hello"; //
print(c);
}
