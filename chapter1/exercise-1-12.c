#include <stdio.h>

#define IN  1  /* inside a sequence of blank space */
#define OUT 0  /* outside a sequence of blank space */

/* prints input one word per line */
int main()
{
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (state == OUT) 
      if (c == ' ' || c == '\t')
        state = IN;
      else
        putchar(c);
    else {
      if (c != ' ' && c != '\t') {
        putchar('\n');
        putchar(c);
        state = OUT;
      }
    }
  }
}
