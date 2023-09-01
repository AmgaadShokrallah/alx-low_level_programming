#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int result = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
			if (*ch < 48 || *ch > 57)
			{
				printf("Error\n");
				return (1);
			}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
