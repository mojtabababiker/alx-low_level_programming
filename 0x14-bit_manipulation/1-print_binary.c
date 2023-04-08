#include "main.h"

/**
 * print_binary - prints the binary representation of number
 * @n: the number to be print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
