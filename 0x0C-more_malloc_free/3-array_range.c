#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size;

	if (min > max)
		return (NULL);

	size = 0;
	for (i = min; i <= max; i++)
		size++;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
