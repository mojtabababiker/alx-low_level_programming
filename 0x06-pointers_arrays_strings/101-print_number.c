#include <limits.h>
#include "main.h"

/**
 * print_number - print an intger number n
 * @n: intger number arg1
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	n1 = n;
	if (n1 > 9)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) +  '0');
	return;
}
