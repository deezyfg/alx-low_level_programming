#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate strings from an array with newlines.
 *
 * @ac: Number of strings in the array.
 * @av: Array of strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
		len++;
	}

	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[count] = av[i][j];
		count++;
	}

	if (str[count] == '\0')
	{
		str[count++] = '\n';
	}
	}

	return (str);
}
