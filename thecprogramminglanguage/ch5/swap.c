#include <stdio.h>

int main()
{
    int x=1, y=20;
    printf("x = %d, y = %d\n", x, y);
    int *xp, *yp;
    xp = &x;
    yp = &y;
    int tmp = *xp;
    *xp = *yp;
    *yp = tmp;
    printf("x = %d, y = %d\n", x, y);
}
