#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit of temperature table */
    step = 20;   /* step size */
    
    printf(" %s           %s\n", "C", "F");
    printf("---------------\n");
    for(celsius = lower; celsius <= upper; celsius = celsius + step) {
        fahr = (9.0 / 5.0 * fahr) + 32.0;
        printf("%5.1f %9.0f\n", celsius, fahr);
    }

    return 0;
}

