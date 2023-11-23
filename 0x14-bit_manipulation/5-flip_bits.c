#include "main.h"

/**
 * flip_bits - Returns the number of bits needed
 *            to flip to transform one number into another.
 * @n: The first number.
 * @m: The seconf number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}
