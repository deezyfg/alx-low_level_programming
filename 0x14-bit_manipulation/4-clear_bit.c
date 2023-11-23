#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *             at a given index.
 *
 * @n: Pointer of an unsigned long int.
 * @index: Index of the bit.
 * Return:
 * - 1 if it worked.
 * - -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & (~(1ul << index));
	return (1);
}
