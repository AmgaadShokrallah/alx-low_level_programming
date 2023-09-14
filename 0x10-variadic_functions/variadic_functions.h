#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

typedef struct style
{
	char *data;
	void (*f)(char *, va_list);
} style;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list ap);
void _printint(va_list ap);
void _printfloat(va_list ap);
void _printstr(va_list ap);

#endif
