#include "main.h"

/**
 * print_line - print '_' n times
 * @n: numbers of '_'
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (i = 0 ; i <= n ; i++)
			_putchar('_');
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
