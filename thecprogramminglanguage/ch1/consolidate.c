#include <stdio.h>

int main()
{
    int c;
    int prv;
    while ((c = getchar()) != EOF)
    {
        if (prv != ' ' || c != ' ')
            putchar(c);
        
    }
}
        
