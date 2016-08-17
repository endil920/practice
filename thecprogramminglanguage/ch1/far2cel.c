#include <stdio.h>

float convert(float farTemp)
{
    return 5.0 * (farTemp - 32) / 9;
}

int main()
{
    float farh, cel;
    int upper=300, lower=0, step=10;

    printf("farenheit\tcelcius\n");        
    farh = lower;
    while (farh <= upper)
    {
        cel = convert(farh);
        printf("%9.1f\t%6.1f\n",farh, cel);
        farh += step;
    }
}


