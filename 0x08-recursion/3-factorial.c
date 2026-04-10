#include "main.h"

int factorial(int n)
{
    if (n < 0)      /* error case */
        return (-1);

    if (n == 0)     /* base case */
        return (1);

    return (n * factorial(n - 1));
}
