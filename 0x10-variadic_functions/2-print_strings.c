#include "variadic_functions.h"

/**
 * print_strings - print string parameters and skip the rest
 * @separator: word separator
 * @n: number of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *st;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		st = va_arg(strings, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
}
