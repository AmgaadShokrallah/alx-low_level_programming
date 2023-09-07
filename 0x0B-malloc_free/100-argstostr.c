#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: parameter1
 * @av: parameter2
 *
 * Return:  pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, l, x, y;

	if (ac == 0 || av == NULL)
		return (NULL);

	x = 0;
	y = 0;

	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (av[i][l])
		{
			y++;
			l++;
		}
		y++;
	}
	s = malloc(1 + y * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (av[i][l])
		{
			s[x] = av[i][l];
			l++;
			x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
