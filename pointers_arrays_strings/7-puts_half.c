#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len] != '\0')
        len++;

    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    for (; i < len; i++)
        putchar(str[i]);

    putchar('\n');
}
