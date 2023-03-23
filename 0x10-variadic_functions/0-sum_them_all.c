#include "variadic_function.h"

/**
 * sum_them_all - Calculate the sum of all its parameters
 * @n: number of parameters
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	int sum = 0;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_args(args, int);
	}
	va_end(args);

	return (sum);
}
