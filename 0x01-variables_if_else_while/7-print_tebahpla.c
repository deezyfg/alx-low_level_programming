#include <stdio.h>
#include <ctype.h>
/**
 * main - this is the main func
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar (letter);
	}
		putchar('\n');
		return (0);
}
