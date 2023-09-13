#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(a, b));

	return (0);
}
