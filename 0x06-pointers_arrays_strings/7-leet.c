#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 *
 * @s: parameter
 *
 * Return: pointer to the resulting string dest.
 */

char *leet(char *s)
{
	int i, j;

	char *c = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
