#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 1)
	{
		b = (a + 1) / 2;
	}
	else
	{
		b = a / 2;
	}

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
