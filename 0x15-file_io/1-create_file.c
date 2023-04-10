#include "main.h"

/**
 * create_file - creat a file with the text_content contents,
 *              and wr------- permission.
 * @filename: file name.
 * @text_content: file contents.
 * Return: 1 success, -1 failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		fd = creat(filename, 0600);
		if (fd < 0)
			return (-1);
	}
	if (text_content == NULL)
		return (1);
	len = strlen(text_content);
	if (!(write(fd, text_content, len)))
		return (-1);
	return (1);
}
