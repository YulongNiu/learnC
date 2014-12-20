#include <stdio.h>

int main()
{
  int blankNum, tabNum, newlineNum;
  int c;
  int done = 0;
  int lastchar = 0;

  blankNum = tabNum = newlineNum = 0;
    
  while (done == 0) {
    c = getchar();
    if (c == '\n')
    {
      ++newlineNum;
    }
    else if (c == ' ')
    {
      ++blankNum;
    }
    else if (c == '\t')
    {
      ++tabNum;
    }
    else if (c == EOF) {
      if (lastchar != '\n') {
        ++newlineNum;
      }
      done = 1;
    }
    lastchar = c;
  }

  printf("The blank number, tab number, and the newline number is %d %d %d, respectively.\n", newlineNum, blankNum, tabNum);
  
  return 0;
}
