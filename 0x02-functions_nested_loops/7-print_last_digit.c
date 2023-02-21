#include "main.h"

/**
 * print_last_digit - function that return number last digit
 * Return: last_digit
 * @num: arg 1
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	_putchar((char)last_digit);
	return last_digit;
}
