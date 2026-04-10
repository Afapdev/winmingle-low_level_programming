#include <stdio.h>
#include "main.h"

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World";

    printf("%d\n", _strcmp(s1, s2)); /* -15 */
    printf("%d\n", _strcmp(s2, s1)); /* 15 */
    printf("%d\n", _strcmp(s1, "Hello")); /* 0 */

    return (0);
}
