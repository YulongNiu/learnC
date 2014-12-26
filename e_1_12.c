#include <stdio.h>

#define IN 1
#define OUT 0


int main(void)
{
  int c, state;
  state = OUT;


  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      putchar(c);
      /* mark the word */
      state = IN;
    }
    else {
      if (state == IN) {
        putchar('\n');
        state = OUT;
      }
      else {}
    }
  }
  
  return 0;
}
