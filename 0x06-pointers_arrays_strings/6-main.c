#include <stdio.h>
#include "main.h"

int main(void)
{
	char str1[] = "expect the best. prepare for the worst. capitalize on what comes.";
	char str2[] = "hello world!";

	printf("%s\n", cap_string(str1));
	printf("%s\n", cap_string(str2));

	return (0);
}
