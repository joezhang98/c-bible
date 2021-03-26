#include <stdio.h>

/* counts the number of blanks, tabs, and newlines */
int main()
{
  int blanks, tabs, newlines;
  int c;

  blanks = tabs = newlines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    if (c == '\t')
      ++tabs;
    if (c == '\n')
      ++newlines;
  }

  printf("# blanks:   %d\n", blanks);
  printf("# tabs:     %d\n", tabs);
  printf("# newlines: %d\n", newlines);
}

