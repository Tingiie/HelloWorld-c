#include <stdio.h>

/*Print table of Fahrenheit to Celsius for fahr = 0, 20, ..., 300 */
/* C = (5/9)*(F-32) */

int main() {

    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s \n", "Fahrenheit \t Celsius");
    while (fahr <= upper) {
      celsius = 5*(fahr-32)/9;
      printf("%6d\t\t%5d\n", fahr, celsius);
      fahr = fahr + step;
    }
}
