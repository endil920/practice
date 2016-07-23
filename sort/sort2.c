#include <stdio.h>
#include <stdlib.h>
/*
 * sorts an prints a file with numbers in it called 'nums.txt'
 */

int cmpfunc(const void* a, const void *b)
{
    return *(int *)b - *(int *)a;

}
int main()
{
    FILE* f = fopen("nums.txt", "r");
    int container[12];
    int i = 0;
    while(fscanf(f, "%d,", &container[i]) > 0)
    {
        i++;
    }
    qsort(container, 12, sizeof(int), cmpfunc);
    int j = 0;
    while(j < i)
    {
        printf("%d\n", container[j++]);
    }
}
