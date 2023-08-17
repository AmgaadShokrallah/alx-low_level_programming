#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - unction that draws a diagonal line.
 * @n: parameter
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int x = 0;
	int y = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
