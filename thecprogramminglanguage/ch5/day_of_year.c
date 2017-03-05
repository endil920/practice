#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int, int, int);

int main()
{
    int year = 2017;
    int month = 2;
    int day = 25;
    int doy = day_of_year(year, month, day);
    printf("%d-%d-%d is the %d day of the year\n", month, day, year, doy);
}

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year %4 == 0 && year%100 != 0) || year%400 == 0;
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day;
}
