#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src into dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill remaining with '\0' */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
