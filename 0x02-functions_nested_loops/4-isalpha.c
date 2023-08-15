#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function checks for alphabetic character.
 *
 *@c: will be checked in function.
 *
 * Return: 1 if character is lowercase , 0 character otherwise
*/

int _isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' c >= 'Z';))
		return (1);
	else
		return (0);

}
