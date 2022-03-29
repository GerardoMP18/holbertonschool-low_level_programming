#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: desc
 * @text_content: desc
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int x;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);

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
