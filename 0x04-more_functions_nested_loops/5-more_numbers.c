#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  prints 10 times numbers from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num1 = 0;
	int num2 = 0;

	while (b < 10)
	{
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			a++;
		}

	_putchar('\n');
	b++;
}
