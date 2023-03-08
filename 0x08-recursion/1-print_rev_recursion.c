#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to be print
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	if (*(s + 1) == '\0')
	{
		_putchar((int)*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar((int)*s);
}
