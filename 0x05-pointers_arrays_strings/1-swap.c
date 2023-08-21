#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: parameter1
 * @b: parameter2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int S;

	S = *a;
	*a = *b;
	*b = S;
}
