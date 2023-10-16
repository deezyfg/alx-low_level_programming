#include <stdio.h>
#include "main.h"
/**
 * print_array - check the code.
 * @a: parameter.
 * @n: parameter.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != n - 1)
		{
			printf(", ");
		}

		count++;
	}
	putchar('\n');
}
