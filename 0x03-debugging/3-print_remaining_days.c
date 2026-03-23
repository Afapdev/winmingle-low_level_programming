#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints remaining days in the year
 * @month: month
 * @day: day
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
    int day_of_year;

    day_of_year = convert_day(month, day);

    /* correct leap year condition */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        /* only adjust if after Feb */
        if (month > 2)
            day_of_year += 1;

        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 366 - day_of_year);
    }
    else
    {
        printf("Day of the year: %d\n", day_of_year);
        printf("Remaining days: %d\n", 365 - day_of_year);
    }
}
