#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * _putchar - print single charcter to the stdout
 * @c: charcter to be print
 * Return: one if the the char is printede,, else -1 in fialure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
