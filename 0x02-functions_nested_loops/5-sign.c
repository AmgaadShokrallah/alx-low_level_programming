#include <stdio.h>
#include "main.h"

/**
 * print_sign - function print sign of a number.
 *
 *@n: will be checked in function.
 *
 * Return: 1 if character is lowercase , 0 character otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
