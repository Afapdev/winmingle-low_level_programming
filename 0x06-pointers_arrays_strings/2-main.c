#include <stdio.h>
#include "main.h"

int main(void)
{
	char dest[100];
	char *src = "Michael, solve the problem. Then, write the code";
	int i;

	/* Fill dest with '*' */
	for (i = 0; i < 100; i++)
	{
		dest[i] = '*';
	}

	printf("%s\n", dest);

	/* Copy only first 5 chars */
	_strncpy(dest, src, 7);
	printf("%s\n", dest);

	/* Copy full string */
	_strncpy(dest, src, 100);
	printf("%s\n", dest);

	return (0);
}
