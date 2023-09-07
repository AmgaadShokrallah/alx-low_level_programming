#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using
 * malloc and free.
 * @ptr: parameter1
 * @old_size: parameter2
 * @new_size: parameter3
 *
 * Return: Always 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == 0)
			return (NULL);
		return (s);
	}

	s = malloc(new_size);
	if (s == 0)
		return (NULL);

	c = ptr;

	for (i = 0; i < old_size; i++)
		s[i] = c[i];
	free(ptr);
	return (s);
}
