#include "variadic_functions.h"

/**
 * print_numbers - prints its parameters separated by separator
 * @separator: char use to separates the numbers
 * @n: number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i;

	va_start(numbs, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(numbs);
}
