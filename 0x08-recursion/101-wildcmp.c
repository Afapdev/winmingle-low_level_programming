#include "main.h"

int wildcmp(char *s1, char *s2)
{
    /* If both strings reach end */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* If s2 has '*' */
    if (*s2 == '*')
    {
        /* Skip consecutive '*' */
        if (*(s2 + 1) == '*')
            return (wildcmp(s1, s2 + 1));

        /* '*' matches zero OR more chars */
        return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
    }

    /* If characters match */
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    /* No match */
    return (0);
}
