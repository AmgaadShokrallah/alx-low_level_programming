#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square.
 *@size: parameter
 * Return: Always 0.
 */

void print_square(int size)
{
	int x = 0;
	int y = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
		x++;
		y = 0;
		_putchar('\n');
		}
	}
}
