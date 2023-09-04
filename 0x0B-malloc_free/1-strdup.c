#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: parameter
 *
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *s;
	int i, l;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		s[l] = str[l];
	s[l] = '\0';

	return (s);
}
