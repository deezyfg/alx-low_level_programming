#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination string(dest).
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len]  = '\0';
	return (dest);
}
