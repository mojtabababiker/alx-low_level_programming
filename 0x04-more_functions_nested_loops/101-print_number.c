#include "main.h"

void mult_digit(int n);

/**
 * print_number - Get a integer from the arg and print it
 * @n: integer num
 */

void print_number(int n)
{
	unsigned int temp;

	temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}
	if (temp <= 9)
	{
		_putchar(temp + '0');
	}
	else if (temp > 9)
	{
		mult_digit(temp);
	}
	_putchar(10);
}

/**
 * mult_digit - print multi digits numbers
 * @n: the multi digit number
 */

void mult_digit(int n)
{
	unsigned int temp;

	temp = n;

	if (temp / 10)
	{
		mult_digit(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
