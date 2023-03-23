#include "variadic_functions.h"

void printchar(va_list strings_);
void printint(va_list strings_);
void printfloat(va_list strings_);
void printstr(va_list strings_);

/**
 * print_all - print every thing that in the format
 * @format: contain formattiing specifiers for the rest of the
 *          parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned long int len, i;
	va_list strings;
	int j;

	void (*ptr[4])(va_list string_);

	char format_spsf[] = {'c', 'i', 'f', 's'};

	ptr[0] = printchar, ptr[1] = printint;
	ptr[2] = printfloat, ptr[3] = printstr;

	len = strlen(format);
	i = 0, j = 0;
	va_start(strings, format);
	while (i < len)
	{
		while (j < 4)
		{
			if (format[i] == format_spsf[j])
			{
				ptr[j](strings);
				if (i != len - 1)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	va_end(strings);
}
/**
 * printchar - print char
 * @strings_: va_list for the parameters
 */
void printchar(va_list strings_)
{
	char chr;

	chr = va_arg(strings_, int);
	printf("%c", chr);
}
/**
 * printint - print integer
 * @strings_: va_list for the parameters
 */
void printint(va_list strings_)
{
	int i;

	i = va_arg(strings_, int);
	printf("%d", i);
}
/**
 * printfloat - print float
 * @strings_: va_list for the parameters
 */
void printfloat(va_list strings_)
{
	double f;

	f = va_arg(strings_, double);
	printf("%f", f);
}
/**
 * printstr - print str
 * @strings_: va_list for the parameters
 */
void printstr(va_list strings_)
{
	char *chrp;

	chrp = va_arg(strings_, char *);
	printf("%s", chrp);
}
