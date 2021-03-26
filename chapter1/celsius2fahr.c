#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;      /* lower limit of temperature scale */
  upper = 300;    /* upper limit */
  step = 20;      /* step size */

  printf("Celsius to Fahrenheit conversion:\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * (9.0/5.0)) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

