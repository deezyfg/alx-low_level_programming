#include "main.h"

/**
* print _numbers - Prints 0-9
* @c: The character to check
* Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
