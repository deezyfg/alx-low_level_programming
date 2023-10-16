#include "main.h"
/**
 * print_rev - check the code.
 * @s: parameter.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;
	int letter;

	while (s[count] != '\0')
	{
		count++;
	}

	letter = count - 1;

	while (letter >= 0)
	{
		_putchar(s[letter]);
		letter--;
	}
	_putchar('\n');
}
