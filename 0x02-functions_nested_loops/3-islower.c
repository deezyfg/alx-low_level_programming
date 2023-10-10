#include "main.h"
/**
 * _islower - checks for lowercase characters.
 * @c: The character to be checked.
 * Return: Return: 1 if character is lowercase, otherwise 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
