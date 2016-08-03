#include <stdio.h>

/*
 * iterate through each letter
 * start in state OUT
 * if IN and newline or tab or space print newline set state to OUT
 * if OUT and newline or tab or space skip
 * if OUT and character set state to IN and print char
 */
#define IN 1
#define OUT 0
int main()
{
    int c, state = OUT;
    while((c = getchar()) != EOF)
    {
        if (c == '\n' || c =='\t' || c ==' ')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else 
        {
            putchar(c);
            state = IN;
        }
    }
}
                

        



