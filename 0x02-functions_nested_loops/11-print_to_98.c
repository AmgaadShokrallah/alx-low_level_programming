#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 *@n: input
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%i, ", n--);
		 printf("%i\n", n);
	}

	else
	{
		while (n < 98)
			printf("%i, ", n++);
		printf("%i\n", n);
	}
}
