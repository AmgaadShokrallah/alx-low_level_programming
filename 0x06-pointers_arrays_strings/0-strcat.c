#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int ch1, ch2;

	ch1 = 0;
	while (dest[ch1] != '\0')
	{
		ch1++;
	}
	ch2 = 0;
	while (src[ch2] != '\0')
	{
		ch2++;
		dest[ch1] = src[ch2];
		ch1++;
	}
	dest[ch1] = '\0';
	return (dest);
}
