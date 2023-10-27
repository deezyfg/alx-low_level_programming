#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
