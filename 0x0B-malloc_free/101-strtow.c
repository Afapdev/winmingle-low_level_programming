#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0, words = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			words++;

			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (words);
}

/**
 * free_words - frees allocated words
 * @words: array of words
 * @n: number of allocated words
 */
void free_words(char **words, int n)
{
	int i;

	for (i = 0; i < n; i++)
		free(words[i]);

	free(words);
}

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to array of words, or NULL
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, start, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);

	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	k = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		start = i;
		len = 0;

		while (str[i] != ' ' && str[i] != '\0')
		{
			len++;
			i++;
		}

		words[k] = malloc(sizeof(char) * (len + 1));

		if (words[k] == NULL)
		{
			free_words(words, k);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[k][j] = str[start + j];

		words[k][j] = '\0';
		k++;
	}

	words[k] = NULL;

	return (words);
}
