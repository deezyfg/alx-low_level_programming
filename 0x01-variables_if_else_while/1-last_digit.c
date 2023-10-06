#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - this is my main func
 *
 * Return: 0
 */
int main(void)
{
	int n;

	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_digit = n % 10;

	if (l_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		n, l_digit);
	}

	else if (l_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_digit);
	}

	else if (l_digit != 0 && l_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, l_digit);
	}


	return (0);
}
