#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv;  /* avoid unused warning */

    printf("%d\n", argc - 1);

    return 0;
}
