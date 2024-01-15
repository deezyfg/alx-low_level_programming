#include "main.h"
/**
 * _strcpy - Copies a string
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string(dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
