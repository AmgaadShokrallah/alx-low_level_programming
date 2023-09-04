#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates array of chars, and initializes with specific char.
 * @size: parameter1
 * @c: parameter2
 *
 * Return: Returns a pointer to the array, or NULL.
 */

char *create_array(unsigned int size, char c)
{
	int *s;
	int i;

	if (size == 0 || s == NULL)
		return (0);

	s = (char *)malloc(sizeof(char) * size);

	while (s < size)
	{
		for (i = 0; i < size; i++)
			*s + i = c;
	}
	return (ch);
}
