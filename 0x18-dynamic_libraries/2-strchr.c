#include "main.h"

/**
 * _strchr - Locates character in string
 * @s: The source string
 * @c: The character to find
 *
 * Return: The string from character found
 */
char *_strchr(char *s, char c)
{
int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
	{
		s += b;
		return (s);
	}
	}
	return ('\0');
}
