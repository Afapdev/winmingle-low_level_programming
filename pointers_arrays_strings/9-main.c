#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    char src[] = "First, solve the problem. Then, write the code";
    char dest[100];

    _strcpy(dest, src);

    printf("%s\n", dest);

    return (0);
}
