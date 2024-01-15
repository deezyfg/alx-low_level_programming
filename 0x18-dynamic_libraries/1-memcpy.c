#include "main.h"
/**
 * _memcpy - copy memory data
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: The maximum number of bytes from memory area to copy.
 *
 * Return: A pointer to the destination string(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}

	return (dest);
}
