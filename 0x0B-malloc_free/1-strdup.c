#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i = 0;
	int c = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	p = malloc(sizeof(char) * c + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		p[i] = str[i];

	return (p);

}
