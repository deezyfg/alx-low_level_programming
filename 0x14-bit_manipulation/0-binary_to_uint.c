#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number if successful,
 *         or 0 under the following conditions:
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result <<= 1;
			result += *b - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
