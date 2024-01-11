#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - Finds the biggest number associated with a username.
 *
 * @usrn: Username to be searched.
 * @len: Length of username.
 * Return: The biggest number found.
 */
int f4(char *usrn, int len)
{
	int ch;
	int vch;
	unsigned int rand_num;

	ch = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (ch < usrn[vch])
			ch = usrn[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - Multiplies each character of a username.
 *
 * @usrn: Username to be multiplied.
 * @len: Length of the username.
 * Return: Multiplied character.
 */
int f5(char *usrn, int len)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < len)
	{
		ch = ch + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 -  Generates a random character for a username.
 *
 * @usrn: Username to be generated.
 * Return: A randomly generated character.
 */
int f6(char *usrn)
{
	int ch;
	int vch;

	ch = vch = 0;

	while (vch < *usrn)
	{
		ch = rand();
		vch += 1;
	}

	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point of the program.
 *
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	ch = vch = 0;
	while (vch < len)
	{
		ch = ch + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/* ----------- f3 ----------- */
	ch = 1;
	vch = 0;
	while (vch < len)
	{
		ch = argv[1][vch] * ch;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
