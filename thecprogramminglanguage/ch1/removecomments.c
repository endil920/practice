#include <stdio.h>
//this is a testing comment
//this too // ok no
int main(int argc, char *argv[])
{
    FILE * fp;
    int c, prv, isComment = 0;
    fp = fopen(argv[1], "r");
    do
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        if (isComment == 1 && c == '\n')
        {
            isComment = 0;//ok go now
        }
        else if (isComment == 2 && c == '*')
        {
            prv = c;
            if ((c = fgetc(fp)) == '/')
            {
                isComment = 0;
            }
        }
        else if (isComment == 0)
        {/*
            */if (c == '/')
            {
                prv = c;
                c = fgetc(fp);
                if (c == '/')
                {
                    isComment = 1;
                } else if (c == '*')
                {
                    isComment = 2;
                } else if (c != '*' && c != '/')
                {
                    printf("%c%c", prv, c);
                }
            } else {
                printf("%c", c);
            }
        }
    }while(1);

}
//okeeee
