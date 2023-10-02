#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
* main - program
* @argc: parameter1
* @argv: parameter2
* Return: 1 on success 0 on failure
*/

int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0;
	ssize_t f;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	while (f == 1024)
	{
		f = read(fd_from, buff, 1024);
		if (f == -1)
			dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
		if (write(fd_to, buff, f) != f)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_to), exit(100);

	return (0);
}
