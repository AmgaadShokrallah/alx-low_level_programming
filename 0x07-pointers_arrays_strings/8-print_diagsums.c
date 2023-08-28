#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: parameter1
 * @size: parameter2
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
