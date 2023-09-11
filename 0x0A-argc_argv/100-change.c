#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print minimum number of coins to
 * make change for an amount of money
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int n, i, result;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= cents[i])
		{
			result++;
			n -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
