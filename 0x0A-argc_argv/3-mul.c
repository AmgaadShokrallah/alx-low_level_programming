#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
