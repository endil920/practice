#include <stdio.h>

void reverse(char s[])
{
    int i, j = 0;
    char tmp;
    for (i = 0; s[i] != '\0'; i++);
    if (i > 0)
        i--;
    while (j < i)
    {
        tmp = s[j];
        s[j] = s[i];
        s[i] = tmp;
        i--;
        j++;
    }
    return;
}

int getLine(char s[], int lim)
{
    char c;
    int i = 0;
    while ((c = getchar()) != EOF && c != '\n' && i < lim)
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    char s[100];

    while (getLine(s, 100) > 0)
    {
        reverse(s);
        printf("%s\n", s);
    }
}

    

