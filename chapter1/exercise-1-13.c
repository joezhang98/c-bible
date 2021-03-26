#include <stdio.h>

#define IN       1  /* inside a word */
#define OUT      0  /* outside a word */
#define MAX_LEN 16  /* maximum word length */

/* prints a histogram of the lengths of words in input */
int main()
{
  int wlen;
  int word_lens[MAX_LEN+1];
  int c, state;

  wlen = 0;
  state = OUT;
  for (int i = 0; i < MAX_LEN; ++i)
    word_lens[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (wlen != 0) {
        word_lens[wlen] += 1;
        wlen = 0;
      }
      state = OUT;
    }
    else {
      ++wlen;
      if (state == OUT)
        state = IN;
    }
  }
  for (int i = 1; i < MAX_LEN; ++i) {
    printf("Length %2d: ", i);
    for (int j = 0; j < word_lens[i]; ++j) {
      printf(".");
    }
    printf("\n");
  }    
}

