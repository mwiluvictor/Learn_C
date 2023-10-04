#include <stdio.h>

#define LOWER 0
#define UPPER 400
#define STEP 20
  

/* print the Fahrenheit-Celsius table
 for f = 0, 20, 40,..., 400 */

int main()
{ 
 
  for (float fahr = LOWER;fahr <= UPPER;fahr=fahr+STEP)
  {
    float celsius = (5.0/9.0)*(fahr - 32.0);
    printf("%4.0f  %6.3f\n", fahr , celsius);
  }
}


