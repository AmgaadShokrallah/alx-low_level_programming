#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of string.
 * @str: parameter
 *
 * Return: return length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	return (i);
}

/**
 * *_strcpy - function copies the null-terminated C-string
 * pointed to by source to the memory pointed to by dest.
 * @dest: parameter1
 * @src: parameter2
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - creates a new dog.
 * @name: parameter1
 * @age: parameter2
 * @owner: parameter3
 *
 * Return: return pointer new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	(*dogy).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dogy).name == NULL)
	{
		free(dogy);
		return (NULL);
	}

	(*dogy).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dogy).owner == NULL)
	{
		free(dogy);
		free((*dogy).name);
		return (NULL);
	}

	(*dogy).name = _strcpy((*dogy).name, name);
	(*dogy).age = age;
	(*dogy).owner = _strcpy((*dogy).owner, owner);

	return (dogy);
}
