#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: parameter1
 * @size: parameter2
 * @cmp: parameter3
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	else
		return (-1);
}
