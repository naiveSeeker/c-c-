#include <stdio.h>


/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
    int fahr, cel;
    int lower, upper, step;
     lower = 300;      /* lower limit of temperature table */
    upper = 0;    /* upper limit */
    step = 20;      /* step size */
     cel  = lower;
	printf("Celcius\t\tFarhenheit\n");
    while (fahr >= upper) {
        fahr = (cel*9/5) + 32;
        printf("%d\t\t%d\n", cel, fahr);
        cel = cel - step;
    }
}
// (cel * 9 / 5) + 32
