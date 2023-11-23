#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: Unsigned long int input.
 * @index: Index of the bit to retrieve.
 * Return:
 * - The value of the bit at index index .
 * - -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
