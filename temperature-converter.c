#include <stdio.h>

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main(int argc, char const *argv[])
{
   int fahr, celsius;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
   }
   {
    /* code */
   }
   
    return 0;
}
