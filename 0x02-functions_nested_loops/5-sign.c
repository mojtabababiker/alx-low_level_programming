#include "main.h"
/**
 * print_sign - print the sign of the number and return depinds on the sign
 * @n: user entered num
 * Return: 1 if the num is +, 0 if the num 0, -1 if the num is -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
