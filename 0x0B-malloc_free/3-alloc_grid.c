#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a grid
 * @width: width of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(x[j]);
			}
			free(x);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			x[i][j] = 0;

	return (x);
}
