#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
    int i = 0;

    /* find length */
    while (s[i] != '\0')
    {
        i++;
    }

    /* print in reverse */
    while (i > 0)
    {
        i--;
        write(1, &s[i], 1);
    }

    write(1, "\n", 1);
}
