#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int string_length(char *str);
char *create_array(int size);
char *zero_array(char *str);
int get_digit(char c);
void get_product(char *result, char *multiplier, int digit, int zeros);
void add_numbers(char *final_result, char *next_product, int next_length);
int main(int argc, char *argv[]);

/**
 * string_length - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int string_length(char *str)
{
	int length = 0;

	while (*str++)
	length++;

	return (length);
}

/**
 * create_array - Creates an array of chars and initializes it with 'x'.
 * @size: The size of the array.
 *
 * Description: Exits with a status of 98 if there is insufficient memory.
 * Return: A pointer to the array.
 */
char *create_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	exit(98);

	for (index = 0; index < (size - 1); index++)
	array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * zero_array - Iterates through a string of numbers cotaining
 *              leading zeroes until it reaches a non-zero element.
 * @str: The string of numbers.
 *
 * Return: A pointer to the first non-zero element.
 */
char *zero_array(char *str)
{
	while (*str && *str == '0')
	str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

		return (digit);
}

/**
 * get_product - Multiplies a string of numbers by a single digit.
 * @result: The buffer to store the result.
 * @multiplier: The string of numbers.
 * @digit: The single digit.
 * @zeros: The number of leading zeros.
 *
 * Description: Exits with a status of 98
 *              if the multiplier contains non-digits.
 */
void get_product(char *result, char *multiplier, int digit, int zeros)
{
	int mult_length, num, tens = 0;

	mult_length = string_length(multiplier) - 1;
	multiplier += mult_length;

	while (*result)
	{
	*result = 'x';
	result++;
	}

	result--;

	while (zeros--)
	{
	*result = '0';
	result--;
	}

	for (; mult_length >= 0; mult_length--, multiplier--, result--)
	{
	if (*multiplier < '0' || *multiplier > '9')
	{
		printf("Error\n");
		exit(98);
	}

	num = (*multiplier - '0') * digit;
	num += tens;
	*result = (num % 10) + '0';
	tens = num / 10;
	}

	if (tens)
	*result = (tens % 10) + '0';
}

/**
 * add_numbers - Adds numbers stored in two strings.
 * @final_result: The running final product buffer.
 * @next_product: The next product to be added.
 * @next_length: The length of the next product.
 */
void add_numbers(char *final_result, char *next_product, int next_length)
{
	int num, tens = 0;

	while (*(final_result + 1))
	final_result++;

	while (*(next_product + 1))
		next_product++;

	for (; *final_result != 'x'; final_result--)
	{
	num = (*final_result - '0') + (*next_product - '0');
	num += tens;
	*final_result = (num % 10) + '0';
	tens = num / 10;

	next_product--;
	next_length--;
	}

	for (; next_length >= 0 && *next_product != 'x'; next_length--)
	{
	num = (*next_product - '0');
	num += tens;
	*final_result = (num % 10) + '0';
	tens = num / 10;

	final_result--;
	next_product--;
	}

	if (tens)
	*final_result = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Exits with a status of 98
 *              if the number of arguments is incorrect
 * or one number contains non-digits.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_result, *next_product;
	int array_size, index, digit, leading_zeros = 0;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = zero_array(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = zero_array(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	array_size = string_length(argv[1]) + string_length(argv[2]);
	final_result = create_array(array_size + 1);
	next_product = create_array(array_size + 1);

	for (index = string_length(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_product(next_product, argv[1], digit, leading_zeros);
		add_numbers(final_result, next_product, array_size - 1);
		leading_zeros++;
	}

	for (index = 0; final_result[index]; index++)
	{
	if (final_result[index] != 'x')
		putchar(final_result[index]);
	}
	putchar('\n');

	free(next_product);
	free(final_result);

	return (0);
}
