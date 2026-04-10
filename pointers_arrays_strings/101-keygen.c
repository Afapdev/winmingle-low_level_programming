#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    int target = 2772;
    char c;

    srand(time(NULL));

    while (sum < target)
    {
        c = rand() % 94 + 33; /* printable ASCII (33 to 126) */

        if (sum + c > target)
            break;

        sum += c;
        printf("%c", c);
    }

    /* Add final character to reach exact target */
    printf("%c", target - sum);

    return (0);
}
