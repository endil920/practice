#include <stdio.h>

int main()
{
    float farh, cel;
    int upper=300, lower=0, step=10;

    printf("farenheit\tcelcius\n");        
    farh = lower;
    while (farh <= upper)
    {
        cel = 5 * (farh - 32) / 9;
        printf("%9.1f\t%6.1f\n",farh, cel);
        farh += step;
    }
}
