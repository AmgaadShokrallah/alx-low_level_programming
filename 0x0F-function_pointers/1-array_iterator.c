#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: parameter1
 * @size: parameter2
 * @action: parameter3
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
