#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point for simple operations.
  * @argc: The number of command-line arguments.
  * @argv: An array of pointers to the command-line arguments.
  *
 * Return:
 * - 0: If the program executes successfully.
 * - 98: If the number of arguments is incorrect.
 * - 99: If the operator is invalid.
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
