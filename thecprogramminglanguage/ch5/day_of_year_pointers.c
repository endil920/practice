#include <stdio.h>
#include <stdlib.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_year(int, int, int);
void month_day(int, int, int*, int*);

int main()
{
    int year = 2017;
    int month = 2;
    int day = 25;
    int doy = day_of_year(year, month, day);
    printf("%d-%d-%d is the %d day of the year\n", month, day, year, doy);
    
    int *pmonth = (int *)malloc(sizeof(int));
    int *pday = (int *)malloc(sizeof(int));
    month_day(year, doy, pmonth, pday);
    printf("%d day of %d is %d-%d.\n", doy, year, *pmonth, *pday);
}

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = (year %4 == 0 && year%100 != 0) || year%400 == 0;
    char *year_index_p = daytab[leap];
    for (i = 1; i < month; i++)
        day += *(year_index_p + i);
    return day;
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap = (year%4 == 0 && year%100 != 0) || year%400==0;
    char *month_days_p = daytab[leap];
    for (i = 1; yearday > *(month_days_p + i); i++)
    {
        yearday -= *(month_days_p + i);
    }
    *pmonth = i;
    *pday = yearday;
}
