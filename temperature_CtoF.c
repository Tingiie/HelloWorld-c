#include <stdio.h>

/*Print table of Celsius to Fahrenheit for celsius = 0, 20, ..., 300 */
/* F = C * 9/5 + 32 */

int main() {

    int celsius, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%s \n", "Celsius \t Fahrenheit");

    while (celsius <= upper) {
      fahr = (celsius*9)/5 + 32;
      printf("%6d\t\t%6d\n", celsius, fahr);
      celsius = celsius + step;
    }
}
