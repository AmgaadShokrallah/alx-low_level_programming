#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program c'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("%i and is greater than 5\n", n);
	else if (digit < 5)
		printf("and is less than 6 and not 0\n", n);
	else
		printf("%i and is 0\n", n);
	return (0);
}
