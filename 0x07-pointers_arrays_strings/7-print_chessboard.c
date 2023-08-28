#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: parameter
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int i, jtr;

	for (i = 0; i < 8; i++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[i][jtr]);
		}
		_putchar('\n');
	}
}
