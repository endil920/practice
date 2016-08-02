#include <stdio.h>

int main()
{
    long lc = 0;
    long tc = 0;
    long bc = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++lc;
        else if (c == '\t')
            ++tc;
        else if (c == ' ')
            ++bc;
    }
    printf("\n%ld lines\n%ld tabs\n%ld blanks\n", lc, tc, bc);
}


