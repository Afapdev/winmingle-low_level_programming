#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i, j;

    if (!*needle)
        return haystack;

    for (i = 0; haystack[i]; i++)
    {
        j = 0;

        while (needle[j] && haystack[i + j] == needle[j])
            j++;

        if (!needle[j])
            return &haystack[i];
    }

    return 0;
}
