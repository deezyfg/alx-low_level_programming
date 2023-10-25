#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to be printed.
 * Return: value
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1);
		return (++i);
	}
	else
	{
		return (0);
	}
}
