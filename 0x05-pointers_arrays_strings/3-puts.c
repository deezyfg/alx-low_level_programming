#include "main.h"
/**
 * _puts - check the code
 * @str: parameter.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int letter = 0;

	while (str[letter] != '\0')
	{
		_putchar(str[letter]);
		letter++;
	}
	_putchar('\n');
}
