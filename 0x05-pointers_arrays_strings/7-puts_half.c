#include "main.h"
#include <stdio.h>

/**
 * puts_half -  function that prints half of a string.
 *
 * @str: parameter
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int l, i, a;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 0)
	{
		for (a = l / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (l % 2)
	{
		for (i = (l - 1) / 2; i < l - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
