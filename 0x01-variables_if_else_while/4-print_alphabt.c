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
	char c;

	for (c = 'a'; c <= 'z'; c++;)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');
	return (0);
}
