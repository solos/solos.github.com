#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300; floating-point version 
 */
int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius-Fahrenheit table\n");
    celsius = lower;
    while (celsius <= upper) {
	fahr = celsius * 9 / 5 + 32;
	printf("%3.0f\t%6.1f\n", celsius, fahr);
	celsius = celsius + step;
    }
    return 0;
}
