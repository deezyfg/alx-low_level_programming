#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size : size of array
 * @c : character to assign
 * Return:  pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	char *ptr;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
