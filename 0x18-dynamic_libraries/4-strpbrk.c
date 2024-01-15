#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of byte
 * @s:Pointer to the source string
 * @accept:Pointer to the accepted character
 *
 * Return: Pointer to the found character, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
	{
	int a = 0, b;

	while (s[a])
	{
	b = 0;
	while (accept[b])
	{
	if (s[a] == accept[b])
	{
	s += a;
	return (s);
	}
	b++;
}
	a++;
	}
	return ('\0');
}
