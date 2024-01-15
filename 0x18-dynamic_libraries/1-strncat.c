#include "main.h"
/**
 * _strncat - Concatenates two string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the he source string.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++;
	}
	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
