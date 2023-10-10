#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer.
 * @num: print_last_digit parameter.
 * Return: last value of the last digit.
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = (num % 10) * -1;
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = num % 10;
		_putchar(num + '0');
		return (num);
	}
}
