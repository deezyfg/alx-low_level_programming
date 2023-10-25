#include "main.h"

/**
 * length - Calculates the length of a string using recursion.
 * @s: Input string.
 * Return: Length of the string.
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(s + 1));
	}
}

/**
 * check_palindrome - Checks if a string is a palindrome using recursion.
 * @s: Input string.
 * @i: Start index.
 * @len: Length of the string.
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int check_palindrome(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}

	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
		return (check_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 * Return: 1 if it's a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	int len = length(s);

	return (check_palindrome(s, 0, len));
}
