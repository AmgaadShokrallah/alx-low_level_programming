#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 *
 * @s: parameter
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int L, r;
	char c;

	for (L = 0; s[L] != '\0'; ++L)
	{
	}
	for (r = 0; r < L / 2; r++)
	{
		c = s[r];
		s[r] = s[L - 1 - r];
		s[L - 1 - r] = c
}
