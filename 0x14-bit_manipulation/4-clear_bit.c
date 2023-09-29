#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: parameter1
 * @index: parameter2
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(n) * 8)
		return (-1);

	for (b = 1; index > 0; b *= 2, index--)
		continue;

	if ((*n >> index) & 1)
		*n -= b;

	return (1);
}
