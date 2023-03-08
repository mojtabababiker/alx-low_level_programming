#include "main.h"

/**
 * _puts_recursion - print string followed by a new line
 * @s: string to be print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar((int)*s);
	_puts_recursion(s + 1);
}
