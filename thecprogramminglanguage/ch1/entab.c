#include <stdio.h>
#define TAB 10

//replace blank strings with number of spaces to reach same spacing
int main()
{
    int c, i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            putchar(c);
            i = 0;
        } else if (c == ' ' || c == '\t')
        {
            do
            {
                putchar(' ');
                i++;
            }while ((i % TAB) > 0);

            while ((c = getchar()) == ' ' || c == '\t');
            putchar(c);
            i++;
        } else 
        {
            putchar(c);
            i++;
        }
    }
}
