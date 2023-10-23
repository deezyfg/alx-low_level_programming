#include "main.h"

	/**
	* _memset - Fills the first n bytes of the memory area pointed to by s
	* with a constant byte b.
	*
	* @s: Pointer to the memory area
	* @b: The value used to be set
	* @n: Number of bytes to fill
	* Return: Pointer to the memory area s
	*/

	char *_memset(char *s, char b, unsigned int n)
	{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
	}
