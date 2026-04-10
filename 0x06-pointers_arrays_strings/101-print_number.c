#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int num;

	/* Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	/* Print digits recursively */
	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
