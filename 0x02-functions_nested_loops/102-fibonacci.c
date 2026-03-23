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

/**
 * main - prints first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next;
    int i;

    print_number(a);
    _putchar(',');
    _putchar(' ');
    print_number(b);

    for (i = 3; i <= 50; i++)
    {
        next = a + b;
        _putchar(',');
        _putchar(' ');
        print_number(next);

        a = b;
        b = next;
    }

    _putchar('\n');

    return (0);
}
