#include "main.h"

/**
 * create_file - Function that appends text at the end of a file.
 * @filename: input file
 * @text_content: ....
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		x = 0;
		while (text_content[x] != '\0')
		{
			x++;
		}

		wr = write(fd, text_content, x);

		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
