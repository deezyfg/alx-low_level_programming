#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	y = 0;
	z = 0;
	while (s2[z] != '\0')
		z++;
	while (s1[y] != '\0')
		y++;

	if (n >= z)
		n = z;

	s = malloc(sizeof(char) * n + y + 1);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < y; x++)
		s[x] = s1[x];

	for (x = 0; x < n; x++)
		s[x + y] = s2[x];

	s[x + y] = '\0';

	return (s);
}
