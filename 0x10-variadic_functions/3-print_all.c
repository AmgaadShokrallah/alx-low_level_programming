#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - to print char
 * @ap: parameter
 */

void _printchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * _printint - to print intger
 * @ap: parameter
 */

void _printint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * _printfloat - to print float
 * @ap: parameter
 */

void _printfloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * _printstr - to print string
 * @ap: parameter
 */

void _printstr(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
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

	style sort[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (sort[j].data)
		{
			if (format[i] == sort[j].data[0])
			{
			 sort[j].f(sep, ap);
			 sep = ", ";
			}
			i++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
