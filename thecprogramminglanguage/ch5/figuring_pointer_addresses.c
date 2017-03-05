#include <stdio.h>
#include <stdlib.h>

void doSomething(int *v);
void doesNothing(int v);

int main()
{
    int *a = (int *) malloc(100);
    *a = 15;
    doSomething(a);
    doesNothing(*a);
    printf("%d\n", *a);

    int b = 60;
    doSomething(&b);
    printf("%d\n", b);
}

void doSomething(int *v)
{
    *v+=5;
}

void doesNothing(int v)
{
    v+=5;
}
