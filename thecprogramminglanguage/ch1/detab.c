#include <stdio.h>

#define TAB 10

int main(void) {
    int c, i = 0;;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            i = 0;
            putchar(c);
        } else if (c == '\t')
        {
            while((i % TAB) > 0)
            {
                putchar(' ');
                i++;
            }
        }
        else 
        {
            putchar(c);
            i++;
        }
    }

}
