#include <stdio.h>
#include <stdlib.h>
/*
 * sorts a text file with numbers in it called 'nums.txt'
 */

int cmpfunc(const void *a, const void *b)
{
    return *(int *) a - *(int *)b;

}
int main(void)
{
    FILE* f = fopen("nums.txt", "r");
    int i = 0;
    int numo[12];
    while(fscanf(f, "%d,", &numo[i]) != EOF)
    {
        i++;
    }
    qsort(numo, 12, sizeof(int), cmpfunc);
    int j = 0;
    while(j < i)
    {
        printf("hello hollicane %d\n", numo[j++]);
    }

    fclose(f);
}
