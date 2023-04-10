#include "main.h"

/**
 * read_textfile - read text file to stdout
 * @filename: pointer to the file handler
 * @letters: number of letters that printed
 * Return: number of printed chars, or -1 if an error happend
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	size_t i = 0;
	ssize_t printed_chars = 0;

	if (filename == NULL)
		return (-1);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)/*failed to open the file*/
		return (-1);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	/*init the values of bufer before use it*/
	for (i = 0 ; i < letters ; i++)
		buffer[i] = 0;
	printed_chars = read(fd, buffer, letters);
	if (printed_chars > 0)
		printf("%s", buffer);
	free(buffer);
	close(fd);
	return (printed_chars);
}
