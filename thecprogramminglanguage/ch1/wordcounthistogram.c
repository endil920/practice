#include <stdio.h>
/*
 * 1.14
 */

int main() 
{
    int wordCounts[100];
    for (int i = 0; i < 100; i++) 
    {
        wordCounts[i] = 0;
    }

    int c, wordLength = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (wordLength != 0 && wordLength <= 100) 
            {
                wordCounts[wordLength] += 1;
                wordLength = 0;
            }
        } 
        else 
        {
            ++wordLength;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        int wL = wordCounts[i];
        if (wL > 0)
        {            
            printf("%3d | ", i);
            for (int j = 0; j < wL; j++)
            {
                printf("=");
            }
            printf("\n");

        }
    }
}

            

