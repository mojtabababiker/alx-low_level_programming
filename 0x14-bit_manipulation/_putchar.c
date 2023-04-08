#include "main.h"

/**
 * _putchar - write to stdout a single char
 * @c: char to be wrote
 * Return: 1 if success -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
