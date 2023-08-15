#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @n: input number in function.
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n > 0)
		lastdigit = (n % 10) * -1;
	else
		lastdigit = n % 10;
	_putchar (lastdigit + '48');
	return (lastdigit);
}
