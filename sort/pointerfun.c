#import <stdio.h>

int main()
{
    int i = 5;
    printf("&i is %p\n", &i);

    int *j;
    *j = 15;
    printf("j is %d\n", *j);
    printf("j* is %p\n", j);
    printf("&j is %p\n", &j);
}
