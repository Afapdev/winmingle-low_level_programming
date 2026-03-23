#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    int a, b, c;

    a = 970;
    b = 986;
    c = 0;

    printf("%d is the largest\n", largest_number(a, b, c));

    return (0);
}
