#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed by src.
 *
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
