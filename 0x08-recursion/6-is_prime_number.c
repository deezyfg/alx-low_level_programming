#include "main.h"

/**
 * check_prime - Recursive function to determine if a number is prime.
 * @i: Integer to check if it's the prime of n.
 * @n: The integer to test for primality.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int i, int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(i - 1, n));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The integer to test for primality.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n - 1, n));
}
