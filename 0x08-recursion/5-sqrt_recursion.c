#include "main.h"

/**
 * sqrt_helper -  Recursive function to determine
 *                the square root of an integer.
 * @i:Integer to check if it's the square root of n.
 * @n: The number for which to calculate the square root
 * Return: The integer square root of n, or -1 if it's not an integer.
 */
int sqrt_helper(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(i + 1, n));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to calculate the square root
 * Return: The integer square root of n, or -1 if it's not an integer.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (sqrt_helper(0, n));
}
