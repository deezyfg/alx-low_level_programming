#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: Function parameter
 *
 * @accept: Function parameter
 *
 * Return: Always 0.
 */


char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	return (s + i);
	}
	}
	return (0);
}
