#include <stdio.h>
#include "main.h"

/**
 * _islower - function checks for lowercase character.
 *
 *@c: will be checked in function.
 *
 * Return: 1 if character is lowercase , 0 character otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
