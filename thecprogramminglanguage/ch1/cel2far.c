#include <stdio.h>

int main()
{
    float cel, farh;
    int lower = 0, upper = 300, step = 7;
    printf("celcius\tfarenheit\n");
    cel = lower;
    while (cel <= upper)
    {
        farh = cel * 9 / 5 + 32;
        printf("%7.0f\t%9.1f\n", cel, farh);
        cel += step;
    }
}

