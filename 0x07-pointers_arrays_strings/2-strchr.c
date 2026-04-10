#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }

    /* Check for '\0' itself */
    if (c == '\0')
        return (&s[i]);

    return (NULL);
}
