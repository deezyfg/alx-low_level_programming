#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc function
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i = 0;

	unsigned int n = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < n)
	{
		*(p + i) = 0;
		i++;
	}

	return (p);
}
