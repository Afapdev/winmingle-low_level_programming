#include "main.h"

/**
 * print_number - prints an unsigned long int using _putchar
 * @n: number to print
 */
void print_number(unsigned long int n)
{
    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
