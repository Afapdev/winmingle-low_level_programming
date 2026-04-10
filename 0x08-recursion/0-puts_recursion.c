#include "main.h"

void _puts_recursion(char *s)
{
    if (*s == '\0')   /* base case */
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);     /* print current character */
    _puts_recursion(s + 1); /* move to next character */
}
