#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * constructor - print a sentence before mai()
 *
 * Return: void
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
