#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit of temperature table */
    step = 20;   /* step size */
    
    printf(" %s\t%s\n", "F", "C");
    printf("----------\n");
    for(fahr = lower; fahr <= upper; fahr = fahr + step) {
        celsius = 5.0 / 9.0 * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;
}

