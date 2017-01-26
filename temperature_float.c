#include <stdio.h>

/*Print table of Fahrenheit to Celsius for fahr = 0, 20, ..., 300 */
/* C = (5/9)*(F-32) */

int main() {

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);	/*%3.0f means that the first float (f) will be printed 
						at least three characters wide with no decimal point*/
      fahr = fahr + step;			/*%6.1f means that the second float will be printed at 
						least six characters wide with one digit after the decimal point*/
    }
}
