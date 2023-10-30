#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: returns concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		result[i + len1] = s2[i];
	}
	result[i + len1] = '\0';
	return (result);
}
