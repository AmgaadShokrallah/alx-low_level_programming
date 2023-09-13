#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: parameter1
 * @b: parameter2
 *
 * Return: return the sum
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - subtraction of a and b.
 * @a: parameter1
 * @b: parameter2
 *
 * Return: return the difference of a and b
 */

int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
 * op_mul - multiplication of a and b.
 * @a: parameter1
 * @b: parameter2
 *
 * Return: return the product of a and b
 */

int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - division of a and b.
 * @a: parameter1
 * @b: parameter2
 *
 * Return: return result of the division of a by b
 */

int op_div(int a, int b)
{
	int result = a / b;

	return (result);
}

/**
 * op_mod - modulo of a and b.
 * @a: parameter1
 * @b: parameter2
 *
 * Return: return remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
