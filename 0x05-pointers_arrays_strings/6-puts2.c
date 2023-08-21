#include "main.h"
#include <stdio.h>

/**
 * puts2 - rints every other character of a string followed by a new line.
 *
 * @str: parameter
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; ++c)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
	}
	 _putchar('\n');
}
