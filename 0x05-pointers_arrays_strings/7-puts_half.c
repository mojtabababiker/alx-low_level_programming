#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * puts_half - print the last half of string str, if it have odd number of
 * elements print the all the elements after the middle one
 *@str: string variable pointer
 * Return: void
 */

void puts_half(char *str)
{
	unsigned long int _len;
	unsigned long int i;
	unsigned long int n;
	char chr;

	_len = _lenstr(str);

	if (_len % 2 != 0)
	{
		n = (_len - 1) / 2;

		for (i = (_len - n) ; i <= _len ; i++)
		{
			chr = *(str + i);

			_putchar(chr);
		}
	}
	else
	{
		n = _len / 2;

		for (i = n ; i <= _len ; i++)
		{
			chr = *(str + i);

			_putchar(chr);
		}
	}
	_putchar('\n');
}

/**
 * _lenstr - calculate string str length
 * @s: string variable pointer
 * Return: str length
 */

unsigned long int _lenstr(char *s)
{
	unsigned long int _len;

	while (*s != '\0')
	{
		_len++;
		s++;
	}
	return (_len);
}
