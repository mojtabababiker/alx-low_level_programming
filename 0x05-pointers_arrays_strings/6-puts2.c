#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * puts2 - print other chracter start from the first one
 * @str: string variable pointer
 * Return: void
 */

void puts2(char *str)
{
	unsigned long int i;
	unsigned long int _len;
	int chr;

	_len = _lenstr(str);

	for (i = 0 ; i <= _len ; i += 2)
	{
		chr = *(str + i);
		_putchar(chr);
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

	_len = 0;

	while (*s != '\0')
	{
		_len++;
		s++;
	}
	return (_len);
}
