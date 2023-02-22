#include "main.h"

/**
 * print_last_digit - function that return number last digit
 * Return: last_digit
 * @num: arg 1
 */

int print_last_digit(int num)
{
	int last_digit;
	char i;
	int j;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
