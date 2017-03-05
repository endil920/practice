#include <stdio.h>
#include <stdlib.h>
void doProcess(void (*someFun)(int *));
void theFun(int *);
int main()
{
    doProcess(theFun);
}

void doProcess(void (*myFun)(int *))
{
    printf("I'm processing the function\n");
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 15;
    (*myFun)(ptr);
}

void theFun(int *input)
{
    printf("%d is the input yo.", *input);
}
