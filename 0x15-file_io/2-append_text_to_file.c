#include "main.h"

/**
 * append_text_to_file - that appends text at end of file.
 * @filename: parameter1
 * @text_content: parameter2
 *
 * Return: return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, lenght);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
