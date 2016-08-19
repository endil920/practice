#include <stdio.h>
void method(char[]);
int main()
{

    char test[10];
    test[0] = 'h';
    test[1] = 'e';
    test[2] = '\0';
    test[3] = 'm';
    test[4] = '\0';
    printf("%s\n", test);
}




