#include "main.h"

/* helper function */
int check_sqrt(int n, int i)
{
    if (i * i == n)
        return (i);

    if (i * i > n)
        return (-1);

    return (check_sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (check_sqrt(n, 1));
}
