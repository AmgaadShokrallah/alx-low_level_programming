#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: parameter1
 * @max: parameter2
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int i, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	s = malloc(l * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		s[i] = min++;

	return (s);
}
