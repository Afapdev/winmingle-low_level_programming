#include <stdio.h>
#include "main.h"

/**
 * main - test program
 *
 * Return: Always 0
 */
int main(void)
{
    print_remaining_days(2, 28, 1992); /* leap year */
    print_remaining_days(2, 28, 1993); /* non-leap year */
    print_remaining_days(3, 1, 1992);  /* leap year */

    return (0);
}
