#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: ' prints the alphabet, in lowercase'
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');

}
