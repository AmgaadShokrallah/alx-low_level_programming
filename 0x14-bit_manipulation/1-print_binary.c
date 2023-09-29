#include "main.h"


/**
 * print_binary - prints the binary representation of a number.
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (num = n, s = 0; (num >>= 1) > 0; s++)
		continue;
	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
