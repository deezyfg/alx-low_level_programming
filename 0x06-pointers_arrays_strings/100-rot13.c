#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @str: A pointer to the string.
 *
 * Return: *str
 */

char *rot13(char *str)
{
	int i;
	int j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
				{
				str[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
