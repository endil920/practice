#include <stdio.h>

int main()
{
    int charCount[256];
    int c;
    for (int i = 0; i < 256; i++)
    {
        charCount[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        charCount[c] += 1;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (charCount[i] > 0)
        {
            printf("%3c | ", i);
            for (int j = 0; j < charCount[i]; j++)
            {
                printf("=");
            }
            printf("\n");
        }
    }
}
