#include "main.h"

void mult_digit(int n);

/**
 * print_number - Get a integer from the arg and print it
 * @n: integer num
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9)
	{
		mult_digit(n);
	}
	_putchar(10);
}

/**
 * mult_digit - print multi digits numbers
 * @n: the multi digit number
 */

void mult_digit(int n)
{
	if (n / 10)
		mult_digit(n / 10);
	_putchar(n % 10 + '0');
}
