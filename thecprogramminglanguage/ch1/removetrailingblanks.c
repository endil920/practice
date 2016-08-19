#include <stdio.h>

int main()
{
    char c, curChar, prevChar;
    int i = 0, outi = 0, lnbi = -1;
    char input[500], output[500];

    while ((c = getchar()) != EOF) 
    {
        input[i++] = c;
    }

    outi = 0;
    for (int ini = 0; ini < i; ini++) 
    {
        curChar = input[ini];
        if (curChar == '\n') 
        {
            if (lnbi > -1) {
                outi = lnbi + 1;
                output[outi++] = curChar;
            }
        }
        else
        {
            if (curChar != ' ' && curChar != '\t')
                lnbi = outi;
            output[outi++] = curChar;
        }
    }
    output[outi] = '\0';

    printf("%s", output);

}


