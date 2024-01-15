#include "main.h"
/**
 * _isalpha - Checks if a given character is an alphabetic character.
 * @c: The character to be checked.
 * Return:
 * If c is an alphabetic character (a-z or A-Z): 1
 * Otherwise: 0
 */
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

	return (1);

	else

	return (0);
}
