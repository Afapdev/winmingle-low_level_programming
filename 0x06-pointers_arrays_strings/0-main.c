#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    char s1[98] = "Hello";
    char s2[] = " World!";

    printf("%s\n", s1);
    printf("%s\n", s2);

    _strcat(s1, s2);

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s1);

    return (0);
}
