#include "main.h"
/**
 * main - check the code
 *@argc: length of argv
 *@argv: array of arguments
 *Return: none
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd, f, t, td, r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	td = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd, buffer, 1024)) > 0)
	{
		if (write(td, buffer, r) != r || td < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f = close(fd);
	t = close(td);
	if (f < 0 || t < 0)
	{
		if (f < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		if (t < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td);
		exit(100);
	}
	return (0);
}
