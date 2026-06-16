#include <stdio.h>
#include <stdlib.h>

/**
 * errors - prints Error and exits
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *n1, *n2;
	int len1, len2, len, i, j, carry, digit1, digit2;
	int *result;
	int started = 0;

	if (argc != 3)
		errors();

	n1 = argv[1];
	n2 = argv[2];

	if (!is_digit(n1) || !is_digit(n2))
		errors();

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	len = len1 + len2;

	result = malloc(sizeof(int) * len);
	if (result == NULL)
		return (1);

	for (i = 0; i < len; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = n1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = n2[j] - '0';

			carry += result[i + j + 1] + (digit1 * digit2);

			result[i + j + 1] = carry % 10;
			carry /= 10;
		}

		result[i] += carry;
	}

	for (i = 0; i < len; i++)
	{
		if (result[i] != 0)
			started = 1;

		if (started)
			printf("%d", result[i]);
	}

	if (!started)
		printf("0");

	printf("\n");

	free(result);

	return (0);
}
