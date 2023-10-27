#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculates the minimum number of coins to
 * make change for an amount of money.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
	int cents, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	result = 0;

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
	while (cents >= coins[i])
	{
		cents -= coins[i];
		result++;
		}
	}

		printf("%d\n", result);
		return (0);
}
