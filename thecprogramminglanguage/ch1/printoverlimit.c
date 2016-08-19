#include <stdio.h>
#define MAXLINE 1000
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
   while((len = getLine(line, MAXLINE)) > 0);
   return 0;
}

int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && ((c = getchar()) != '\n' && c != EOF); i++)
    {
        s[i] = c;
    }
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    if (i > 80)
        printf("%s\n", s);
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

