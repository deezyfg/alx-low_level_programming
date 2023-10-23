#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The characters to search for.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}
		}
		s++;
	}
	return (i);
}
