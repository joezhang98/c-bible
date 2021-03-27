#include <stdio.h>

#define LOWER 0       /* lower limit of table */
#define UPPER 300     /* upper limit */
#define STEP  20      /* step size */

float fahr2celsius(int fahr);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
  int fahr;

  printf("Fahrenheit to Celsius conversion:\n");

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%3d %6.1f\n", fahr, fahr2celsius(fahr));
  }
}

/* convert Fahrenheit to Celsius */
float fahr2celsius(int fahr)
{
  return (5.0/9.0) * (fahr-32.0);
}

