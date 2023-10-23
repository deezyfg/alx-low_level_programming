#include <stdio.h>
#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle
 * in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (NULL);
}
