#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: parameter.
 * Return: Print
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
