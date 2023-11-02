#include "main.h"
#include <stdlib.h>

/**
 * _realloc - custom implementation of realloc function
 *
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of the previously allocated memory
 * @new_size: new size in bytes for the reallocated memory
 * Return: a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n;
	char *old_memory = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
	return (NULL);

	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;

	for (i = 0; i < n; i++)
	{
		p[i] = old_memory[i];
	}

	free(ptr);
	return (p);
}
