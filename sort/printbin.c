#include <stdio.h>
/*
 * prints the binary form of a number
 */

int main(int argc, char *argv[])
{
    int num;
    sscanf(argv[1], "%i", &num);

    int i = 31;
    while (i >= 0)
    {
        printf("%d", (num >> i) & 1);
        i--;
    }
    printf("\n");
}
