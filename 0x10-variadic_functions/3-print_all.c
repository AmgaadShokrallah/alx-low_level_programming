#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_print_char - to print char
 * @ap: parameter
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - to print intger
 * @ap: parameter
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - to print float
 * @ap: parameter
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - to print string
 * @ap: parameter
 */

void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		s = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: parameter
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep = "";
	va_list ap;

	list format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (format[j].format)
		{
			if (format[i] == format[j].format[0])
			{
			 format[j].f(sep, ap);
			 sep = ", ";
			}
			i++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
