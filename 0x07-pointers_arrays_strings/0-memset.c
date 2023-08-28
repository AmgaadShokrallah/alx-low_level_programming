#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: parameter1
 * @b: parameter2
 * @n: parameter3
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (0);
}
