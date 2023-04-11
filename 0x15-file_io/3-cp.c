#include "main.h"

int copy_from_file(int *fd1, char *src_name, int *fd2, char *dest_name);

/**
 * main - program entry point
 * @argc: arguments number
 * @argv: arguments string
 * Return: 0 success, 97 wrong args number, 98 unaccessable source file
 *         99 unaccessable destination file, 100 error in closing file
 */
int main(int argc, char **argv)
{
	int file_from, file_to, close_value;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	file_from = open(argv[1], O_RDWR);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_to = open(argv[2], O_RDWR);
	if (file_to < 0)
	{
		file_to = creat(argv[2], 0664);
		if (file_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	copy_from_file(&file_from, argv[1], &file_to, argv[2]);
	close_value = close(file_from);
	if (close_value < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_value = close(file_to);
	if (close_value < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * copy_from_file - copy 1024 byts from fd1 to the buffer until the end of file
 *                  and copy it to fd2
 * @fd1: file descriptor to copy from
 * @src_name: source file path
 * @fd2: file descriptor to copy to
 * @dest_name: destnation file path
 * Return: 1 success, 98 unaccessable file path
 */
int copy_from_file(int *fd1, char *src_name, int *fd2, char *dest_name)
{
	int read_value, write_value;
	char *buffer[1024];

	do {
		read_value = read(*fd1, buffer, 1024);
		if (read_value < 0)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", src_name);
			exit(98);
		}
		write_value = write(*fd2, buffer, 1024);
		if (write_value < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				dest_name);
			exit(99);
		}
	} while	(read_value);
	return (0);
}
