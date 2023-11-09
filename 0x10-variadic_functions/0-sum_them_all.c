#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Returns the sum of a variable number of integers.
  * @n: The number of integers to be summed.
  * @...: A variable number of integers to be summed.
  *
  * Return: The sum of all the integers. If n is 0, it returns 0.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
