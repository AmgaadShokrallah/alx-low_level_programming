#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: parameter
 *
 * Return: string to return.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0';)
	{
		i++;

		if (s[i] >= 'a' && <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
