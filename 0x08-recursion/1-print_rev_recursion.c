#include "main.h"

void _print_rev_recursion(char *s)
{
    if (*s == '\0')   /* base case */
        return;

    _print_rev_recursion(s + 1); /* go forward first */
    _putchar(*s);                /* print while returning */
}
