#include "main.h"
/**
 * _abs - computes absolute value of an integer.
 * @abs: _abs parameter.
 * Return: Always 0.
 */
int _abs(int abs)
{
	if (abs < 0)
	{
		return (abs * -1);
	}
	else
	{
		return (abs);
	}
}
