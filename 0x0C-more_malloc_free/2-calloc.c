#include "main.h"
#include <stdlib.h>

/**
 * *_calloc -  allocates memory for an array, using malloc.
 * @nmemb: parameter1
 * @size: parameter2
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	c = malloc(size * nmemb);
	if (c == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		c[i] = 0;

	return (c);
}
