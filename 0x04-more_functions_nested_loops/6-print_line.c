#include "main.h"
#include <stdio.h>

/**
 * print_line - unction that draws a straight line.
 * @n: parameter
 * Return: Always 0.
 */

void print_line(int n)
{
	int ch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (ch <= n)
		{
			_putchar('_');
			ch++;
		}
	_putchar('\n');
	}
}
