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
	int *ch;
	int i;

	if (size == 0 || ch == NULL)
		return (0);

	ch = (char *)malloc(sizeof(char) * (size));

	while (ch < size)
	{
		for (i = 0; i < size; i++)
			ch + i = c;
	}
	return (ch);
}
