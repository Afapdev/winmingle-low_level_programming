#include "main.h"

int _pow_recursion(int x, int y)
{
    if (y < 0)      /* error case */
        return (-1);

    if (y == 0)     /* base case */
        return (1);

    return (x * _pow_recursion(x, y - 1));
}
