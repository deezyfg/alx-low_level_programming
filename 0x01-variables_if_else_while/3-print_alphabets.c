#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main func
 *
 * Return: 0
 */
int main(void)
{
	int letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (toupper(letter));
	}
	putchar ('\n');
	return (0);
}
