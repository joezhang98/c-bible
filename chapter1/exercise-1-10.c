#include <stdio.h>

/* copies input to output, making tabs and backspaces visible in an
   unambiguous way */
int main()
{
  int c;
  
  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    if (c == '\b')
      printf("\\b ");
    if (c == '\\')
      printf("\\\\");
    else
      putchar(c);
  }
}
