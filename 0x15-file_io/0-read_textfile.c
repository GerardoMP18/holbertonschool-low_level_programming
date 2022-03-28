#include "main.h"

/**
 * read_textfile - unction that reads a text file and
 * prints it to the POSIX standard output
 * @filename: input file
 * @letters: count letters of file
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, rd, wr;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf =  malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);

	if (rd == -1)
		return (0);

	buf[rd] = '\n';
	close(fd);
	wr =  write(STDOUT_FILENO, buf, rd);

	if (wr == -1)
		return (0);

	free(buf);
	return (wr);


}
