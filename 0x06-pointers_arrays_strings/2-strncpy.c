#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 *
 * @dest: parameter1
 * @src: parameter2
 * @n: most n bytes to copy
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	while (src[ch2] != '\0')
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
