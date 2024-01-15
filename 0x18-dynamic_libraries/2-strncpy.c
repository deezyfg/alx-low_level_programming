#include "main.h"

/**
 * _strncpy - Copies a specified number of characters
 *		from source to destination.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the destination string(dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}
	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
