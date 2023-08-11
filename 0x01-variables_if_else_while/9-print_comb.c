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
	int i = 48;

	while (i <= 102)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
