#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: parameter1
 * @needle: parameter2
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, jtr;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (jtr = 0; needle[jtr] != '\0'; jtr++)
		{
			if (haystack[i + jtr] != needle[jtr])
				break;
		}
		if (!needle[jtr])
			return (&haystack[i]);
	}
	return ('\0');
}
