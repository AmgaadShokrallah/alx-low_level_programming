#include "main.h"

int my_pal(char *s, int i);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks string if a palindrome
 * @s: parameter
 *
 * Return: 1 if it is, 0 if not.
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;

	return (my_pal(s, --i));
}

/**
 * _strlen_recursion - get length of string
 * @s: parameter
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * my_pal - recursive check of palindrome
 * @s: parameter1
 * @i: parameter2
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int i)
{
	if (*s == *(s + i))
	{
		if (i <= 0)
			return (1);
		else
			return (my_pal(++s, i - 2));
	}
	else
		return (0);
}
