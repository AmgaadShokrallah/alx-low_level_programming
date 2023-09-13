#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int by, i;
	char *array = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < by; i++)
	{
		if (i == by - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
