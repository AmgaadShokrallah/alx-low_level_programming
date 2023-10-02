#include "main.h"

/**
 * create_file - that creates a file.
 * @filename: parameter1
 * @text_content: parameter2
 *
 * Return: return 1 if success, Otherwise 0.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	int lenght = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lenght);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
