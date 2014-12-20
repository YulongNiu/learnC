#include <stdio.h>

int main()
{
  int c, ln;
  ln = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '\n')
    {
      ++ln;
    }
    else {}
  }

  printf("%d\n", ln);
  return 0;
}
