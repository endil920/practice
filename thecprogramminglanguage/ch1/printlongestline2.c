#include <stdio.h>
#define MAXLINE 8
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

//print the longest line in a file
int main()
{
   int len;
   int max;
   char line[MAXLINE];
   char longest[MAXLINE];

   max = 0;
   while((len = getLine(line, MAXLINE)) > 0)
   {
       if (len > max)
       {
           max = len;
           copy(longest, line);
       }
   }
   if (max > 0)
       printf("%s\n", longest);
   printf("the max length is: %d\n", max);
   return 0;
}

int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; ((c = getchar()) != '\n' && c != EOF); i++)
    {
        if (i < lim - 1)
            s[i] = c;
    }
    if (c == '\n' && i < lim - 1)
    {
        s[i++] = c;
    }
    else if(c == '\n')
    {
        i++;
    }

    if (i < lim)
    {
        s[i] = '\0';
    }
    else
    {
        s[lim - 1] = '\0';
    }
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    char c;
    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
}

