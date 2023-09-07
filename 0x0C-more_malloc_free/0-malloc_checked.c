#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory.
 * @b: parameter
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == 0)
		exit(98);
	else
		return (s);
}
