#include <stdio.h>
#include "main.h"

int main(void)
{
    int a = 95;
    int b = 40;

    printf("a = %d, b = %d\n", a, b);
    swap_int(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return (0);
}
