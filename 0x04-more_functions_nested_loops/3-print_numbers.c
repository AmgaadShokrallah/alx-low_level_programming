#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i = 48;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
