#include <stdio.h>
#include <stdlib.h>

int main()
{
    char b[] = "and me";
    char *p = (char *) malloc(100);

    /*
    int i = 0;
    while ((*(p+i) = b[i]) != '\0'){
        i++;
    }
    */
    p = b;
    
    b[0] = 'c';
    b[1] = 'j';

    printf("b says: %s\n", b);
    printf("p says: %s\n", p);
    printf("p[0] says: %c\n", p[0]);
    printf("b is: %p\n", &b);
    printf("p is: %p\n", &p);
    printf("b[0] is: %p\n", &b[0]);
    printf("p[0] is: %p\n", &p[0]);

}
