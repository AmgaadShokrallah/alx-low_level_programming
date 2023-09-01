#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
