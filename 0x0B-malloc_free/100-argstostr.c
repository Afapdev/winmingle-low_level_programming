#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k;
    int len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate total length needed */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            len++;

        len++; /* for '\n' */
    }

    str = malloc((len + 1) * sizeof(char));

    if (str == NULL)
        return (NULL);

    k = 0;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }

        str[k] = '\n';
        k++;
    }

    str[k] = '\0';

    return (str);
}
