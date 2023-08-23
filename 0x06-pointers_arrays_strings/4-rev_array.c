#include "main.h"
#include <stdio.h>

/**
 * reverse_array - everses the content of an array of integers.
 *
 * @a: parameter1
 * @n: parameter2
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j = (n - 1); i < n / 2; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
