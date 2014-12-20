#include <stdio.h>

int main()
{
  int c;
  int blankNum = 0;

  while ((c = getchar()) != EOF) {

    if (c == ' ')
    {
      if (blankNum == 0)
      {
        putchar(c);
        ++blankNum;
      }
      else {}
    }
    else
    {
      putchar(c);
    }
  }
  return 0;
}
