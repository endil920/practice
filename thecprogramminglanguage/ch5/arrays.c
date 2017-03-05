#include <stdio.h>

int main()
{
    int a[10];
    a[0] = 13;
    a[1] = 100;
    int *ptr = &a[0];
    printf("%d\n", *(ptr+1));
    printf("%d\n", *(a+1));
}
