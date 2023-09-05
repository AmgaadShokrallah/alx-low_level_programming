#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: parameter1
 * @s2: parameter2
 *
 * Return: pointer should point to a newly allocated.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, x, y;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < i)
		{
			s[x] = s1[x];
			x++;
		}
	}
	if (s)
	{
		while (x < (i + j))
		{
			s[x] = s2[y];
			x++;
			y++;
		}
	}
	a[x] = '\0';

	return (s);
}
