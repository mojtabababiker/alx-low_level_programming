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

	last_digit = num % 10;
	for (i = 48 ; i <= 57 ; i++)
	{
		if (last_digit == (int)i)
			_putchar(i);
	}
	return (last_digit);
}
