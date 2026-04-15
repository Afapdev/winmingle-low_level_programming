#include "main.h"

char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] == c)
            return &s[i];
        i++;
    }

    if (s[i] == c) /* check '\0' */
        return &s[i];

    return 0;
}
