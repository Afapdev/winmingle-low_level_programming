#include "main.h"

/**
 * convert_day - converts date to day of year
 * @month: month
 * @day: day
 *
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int i;
    int day_of_year = 0;
    int days_per_month[] = {0, 31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};

    for (i = 1; i < month; i++)
        day_of_year += days_per_month[i];

    day_of_year += day;

    return (day_of_year);
}
