#include <stdio.h>

#define UPPER 300
#define LOWER 0
int main()
{
    printf("farenheit\tcelsius\n");
    for (int farh = UPPER; farh >= LOWER; farh -= 10)
    {
        printf("%9d\t%7.3f\n", farh, (farh - 32) * (5.0/9));
    }
   
}
