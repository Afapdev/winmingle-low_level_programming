#include "main.h"

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int a = 1, b = 2, next;
    int i;

    print_number(a);
    _putchar(',');
    _putchar(' ');
    print_number(b);

    for (i = 3; i <= 98; i++)
    {
        next = a + b;
        _putchar(',');
        _putchar(' ');
        print_number(next);

        a = b;
        b = next;
    }

    _putchar('\n');
    return 0;
}
