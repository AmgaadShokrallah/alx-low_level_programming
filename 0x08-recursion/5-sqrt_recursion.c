#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter1
 * @i: parameter2
 *
 * Return: Always 0.
 */

int sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - returns the natural square root of a number.
 * @n: parameter1
 * @i: parameter2
 *
 * Return: Always 0.
 */

int sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (sqrt_recursion(n, i + 1));
	else
		return (-1);
}
