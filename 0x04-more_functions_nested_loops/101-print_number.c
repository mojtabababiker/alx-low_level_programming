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
	if (temp / 10)
	{
		print_number(temp / 10);
	}
	_putchar(temp % 10 + '0');

}
