#include <stdio.h>
#include "main.h"

/**
 * _isdigit -  function that checks for a digit.
 * @c: input characters
 * Return: Returns 1 if c is a digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
