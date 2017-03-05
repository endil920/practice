#include <stdio.h>

int main()
{
    char *s = "yogazpants";
    char *p = s + 3;
    printf("%c\n", *(p-1));
    printf("%c\n", p[1]);
}
