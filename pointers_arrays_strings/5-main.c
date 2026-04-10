#include <stdio.h>
#include "main.h"

int main(void)
{
    char str[] = "Hello, winmingle!";

    printf("Original: %s\n", str);
    rev_string(str);
    printf("Reversed: %s\n", str);

    return (0);
}
