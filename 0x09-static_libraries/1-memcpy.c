#include "main.h"


/**
* _memcpy - copies n bytes from memory area src to memory area dest
*
* @src: Pointer to the source of data to be copied
*
* @dest: Pointer to the destination where the content is copied
*
* @n: Number of bytes to be copied
*
* Return: Pointer to the memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
