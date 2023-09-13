#include "function_pointers.h"

/**
 * print_name - prints a name from function pointer.
 * @name: parameter1
 * @f: parameter2
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' || f != '\0')
		return;
	f(name);
}
