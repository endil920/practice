#include <stdio.h>
#define LIM 10

int getSpaceCount(int c)
{
    if (c == ' ')
    {
        return 1;
    } else if (c == '\t')
    {
        return 4;
    }
    return 0;
}

int main()
{
    int c,col = 0, numspaces, localsc;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            putchar(c);
            col = 0;
        }
        else if (c != ' ' && c != '\t')
        {
            if (col >= LIM)
            {
                putchar('\n');
                col = 0;
            }
            putchar(c);
            col++;
        }
        else 
        {
            numspaces = 0;
            numspaces += getSpaceCount(c);
            while ((c = getchar()) && (localsc = getSpaceCount(c)) && localsc > 0)
            {
                numspaces += localsc;
            }
            if (numspaces + col < LIM - 1)
            {
                for (int i = 0; i < numspaces; i++)
                {
                    putchar(' ');
                    col++;
                }
                putchar(c);
                col++;
            }
            else 
            {
                localsc = (col + numspaces) % LIM;
                putchar('\n');
                col = 0;
                for (int i = 0; i < localsc; i++)
                {
                    putchar(' ');
                    col++;
                }
                putchar(c);
                col++;
            }
        }
    }
}
