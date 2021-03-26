#include <stdio.h>

/* copies input to output, replacing each string of one or more
   blanks by a single blank */
int main()
{
  int c;
  int blanks;

  blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      blanks++;
    else {
      if (blanks != 0) {
        blanks = 0;
        putchar(' ');
      }
      putchar(c);
    }
  }
}
