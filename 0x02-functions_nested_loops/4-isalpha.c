#include "main.h"
/**
 * _isalpha - check for alphabetic character.
 * @c: _isalpha parameter.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
