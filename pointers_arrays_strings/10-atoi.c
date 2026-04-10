#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    unsigned int result = 0;

    /* Handle signs */
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
            break;

        i++;
    }

    /* Convert digits */
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return (result * sign);
}
