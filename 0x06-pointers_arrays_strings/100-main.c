#include <stdio.h>
#include "main.h"

int main(void)
{
	char s[] = "ROT13 (rotate by 13 places)";

	printf("%s\n", rot13(s));
	printf("%s\n", rot13(s));

	return (0);
}
