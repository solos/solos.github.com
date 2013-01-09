#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float cel2fahr(float cel);
float fahr2cel(float fahr);


float cel2fahr(float cel)
{
    float fahr;
    fahr = cel * 9.0 / 5 + 32;
    return fahr;
}

float fahr2cel(float fahr)
{
    float cel;
    cel = (fahr - 32) * (5.0 / 9);
    return cel;
}

int main(void)
{

    int cel, fahr;

    printf("Celsius-Fahrenheit table\n");
    for (cel = LOWER; cel <= UPPER; cel += STEP)
	printf("%3d %6.1f\n", cel, cel2fahr(cel));

    printf("Fahrenheit-Celsius table\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	printf("%3d %6.1f\n", fahr, fahr2cel(fahr));

}
