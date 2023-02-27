#include "main.h"

/**
 * _puts - print string  str followed by new line
 * @str: string variable pointer
 * Return: void
 */

void _puts(char *str)
{
	int chr;

	while (*str != '\0')
	{
		chr = *str;

		_putchar(chr);

		str++;
	}
	_putchar('\n');
}
