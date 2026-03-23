#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    printf("%c, %d\n", '+', r);

    r = print_sign(0);
    printf("%c, %d\n", '0', r);

    r = print_sign(0);
    printf("%c, %d\n", '0', r);

    r = print_sign(-98);
    printf("%c, %d\n", '-', r);

    return (0);
}
