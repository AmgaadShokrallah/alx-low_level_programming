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
	int i1 = 0;
	int i2, i3;

	while (i1 <= 9)
	{
		i2 = 0;
		while (i2 <= 9)
		{
			i3 = 0;
			while (i3 <= 9)
			{
				if (i1 != i2 && i1 < i2 && i2 != i3 && i2 < i3)
				{
					putchar(i1 + 48);
					putchar(i2 + 48);
					putchar(i3 + 48);

					if (i1 + i2 + i3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i3++;

			}
			i2++;

		}
		i1++;
	}
	putchar('\n');
	return (0);
}
