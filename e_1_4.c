#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = -20;
  upper = 150;
  step = 10;

  celsius = lower;
  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    /* celsius = (5.0 / 9.0) * (fahr - 32.0); */
    fahr = celsius * 9.0 / 5 + 32;
    printf("%6.0f\t%6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
