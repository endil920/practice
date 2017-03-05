#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc < 2)
        return -1;
    printf("I got %d args boiiii\n", argc);
    while (argc > 1 && (*++argv))
    {
        printf("%s\n", *argv);
        printf("%c\n", (*argv)[0]);
        printf("%c\n", *++argv[0]);
        argc--;
    }
    return 1;
}
