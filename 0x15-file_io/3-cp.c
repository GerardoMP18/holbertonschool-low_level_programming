#include "main.h"
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fread, fwrite, w, size = 1024;
	char buf[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fread = open(argv[1], O_RDONLY);
	if (fread == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fwrite = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fwrite == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while (size == 1024)
	{
		size = read(fread, buf, 1024);
		if (size == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }

		w = write(fwrite, buf, size);
		if (w == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (close(fread) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fread);
		exit(100);
	}
	if (close(fwrite) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fwrite);
		exit(100);
	}
	return (0);
}
