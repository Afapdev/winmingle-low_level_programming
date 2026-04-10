#include "main.h"

/* helper to get length */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);

    return (1 + _strlen_recursion(s + 1));
}

/* helper to check palindrome */
int check_pal(char *s, int start, int end)
{
    if (start >= end)
        return (1);  /* reached middle */

    if (s[start] != s[end])
        return (0);  /* mismatch */

    return (check_pal(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    return (check_pal(s, 0, len - 1));
}
