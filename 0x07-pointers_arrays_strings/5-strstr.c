#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
    int i, j;

    /* If needle is empty */
    if (needle[0] == '\0')
        return (haystack);

    for (i = 0; haystack[i] != '\0'; i++)
    {
        j = 0;

        while (needle[j] != '\0' && haystack[i + j] == needle[j])
        {
            j++;
        }

        if (needle[j] == '\0')
            return (&haystack[i]);
    }

    return (NULL);
}
