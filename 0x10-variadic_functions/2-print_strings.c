#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by new line.
 * @separator: parameter1
 * @n: parameter2
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_end(ap);
}
