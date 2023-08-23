#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: parameter1
 * @src: parameter2
 * @n: most n bytes from src
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int ch1, ch2;

	ch1 = 0;
	while (desr[ch1] != '\0')
	{
		ch1++;
	}

	ch2 = 0;
	while (src[ch2] != '\0' && ch2 < n)
	{
		ch2++;
		dest[ch1] = src[ch2];
		ch1++;
	}
	dest[ch1] = '\0';

	return (dest);
}
