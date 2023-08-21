#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: parameter
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int L;

	for (L = 0; s[L] != 0; L++)
	{
		for (L = L - 1; L >= 0; L++)
		{
			_putchar(s[L]);
		}
	}
	_putchar('\n');
}
