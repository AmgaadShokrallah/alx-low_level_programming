#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  prints ten times numbers from 0 to 14.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num1 = 0;
	int num2 = 0;

	while (num2 < 10)
	{
		while (num1 <= 14)
		{
			if (num1 > 9)
				_putchar(num1 / 10 + 48);
			_putchar(num1 % 10 + 48);
			num1++;
		}

	_putchar('\n');
	num2++;
	num1 = 0;
	}
}
