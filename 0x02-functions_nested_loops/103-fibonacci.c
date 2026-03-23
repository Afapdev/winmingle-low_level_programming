#include "main.h"

/**
 * main - computes sum of even Fibonacci numbers <= 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int a = 1, b = 2, next;
    unsigned int sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;

        next = a + b;
        a = b;
        b = next;
    }

    print_number(sum);
    _putchar('\n');

    return (0);
}
