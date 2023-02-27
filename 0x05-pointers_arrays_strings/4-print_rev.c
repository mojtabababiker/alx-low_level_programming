#include "main.h"

int _lenstr(char *s);

/**
 * print_rev - print string s in a reversed order followed by new line
 * @s: string variable pointer
 * Return: void
 */

void print_rev(char *s)
{
	int length;
	int i;
	int chr;

	length = _lenstr(s);

	if (length >= 0)
	{
		for (i = 0 ; i < length ; i++)
		{
			chr = *(s - i);

			_putchar(chr);
		}
		_putchar('\n');
	}
}

/**
 * _lenstr - calculate the length os a given string
 * @s: string variable pointer
 * Return: string length
 */

int _lenstr(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s = s - 1;

	return (length);
}
