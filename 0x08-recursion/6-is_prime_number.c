#include "main.h"

/* helper function */
int check_prime(int n, int i)
{
    if (i == n)
        return (1);  /* no divisor found → prime */

    if (n % i == 0)
        return (0);  /* divisible → not prime */

    return (check_prime(n, i + 1));
}

int is_prime_number(int n)
{
    if (n <= 1)
        return (0);  /* 0 and 1 are not prime */

    return (check_prime(n, 2));
}
