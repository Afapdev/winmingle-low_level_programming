#include <stdio.h>
#include "main.h"

/**
 * Author: Michael Ayanfe Robinson
 * File: 4-isalpha.c
 *
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter (a-z or A-Z), 0 otherwise
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}
