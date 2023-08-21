#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line to stdout.
 *
 * @str: parameter
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
