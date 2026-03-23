#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
    if (n >= 10)
        _putchar((n / 10) + '0');

    _putchar((n % 10) + '0');
}

/**
 * print_times_table - prints the n times table
 * @n: size of the table
 */
void print_times_table(int n)
{
    int i, j, result;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;

            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                /* spacing for alignment */
                if (result < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                else if (result < 100)
                {
                    _putchar(' ');
                }

                print_number(result);
            }
        }
        _putchar('\n');
    }
}
