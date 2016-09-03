#include <stdio.h>
//this is a testing comment
//this too // ok no
int matches(int, int);
int isOpen(int);
int isClose(int);

int main(int argc, char *argv[])
{
    FILE * fp;
    int brackets[100];
    int quotes[100];
    int inQuotes = 0;
    int c, index = 0, line = 1, col = 1;
    fp = fopen(argv[1], "r");
    do
    {
        c = fgetc(fp);
        if (c == '\n')
        {
            col = 1;
            line++;
            continue;
        }
        if (feof(fp))
        {
            break;
        }
        if (inQuotes == 1)
        {
            if (c == '\'')
            {
                inQuotes = 0;
            }
        }
        else if (inQuotes == 0)
        {
            if (c == '\'')
            {
                inQuotes = 1;
            }
            if (isOpen(c) == 1)
            {
                brackets[index] = c;
                index++;
            } else if (isClose(c) == 1)
            {
                if (matches(brackets[index - 1], c) == 1)
                {
                    index--;
                } else 
                {
                    printf("syntax error at line %d col %d\n", line, col);
                }
            }
        }
        col++;
    } while(1);
}

int matches(int open, int close)
{
    if (open == '(')
    {
        if (close == ')')
            return 1;
    }
    if (open == '{')
    {
        if (close == '}')
            return 1;
    }
    if (open == '[')
    {
        if (close == ']')
            return 1;
    }
    return 0;
}
int isOpen(int c)
{
    if(c == '(' || c == '{' || c == '[')
        return 1;
    return 0;
}
int isClose(int c)
{
    if(c == ')' || c == '}' || c == ']')
        return 1;
    return 0;
}


