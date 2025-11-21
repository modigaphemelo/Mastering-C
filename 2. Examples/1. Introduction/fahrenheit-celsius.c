#include <stdio.h>

#define LOWER   0     /* lower limit of table */
#define UPPER   300   /* upper limit */
#define STEP    20    /* step size */

/* Print Fahrenheit-Celsius table */

int main(void)
{
    float fahr;
    
    printf("Fahrenheit\tCelsius\n");
    printf("----------\t-------\n");
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%6.1f\t\t%6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32.0f));
    }
    
    return 0;
}