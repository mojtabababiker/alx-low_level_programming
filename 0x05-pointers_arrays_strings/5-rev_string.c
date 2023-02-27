#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * rev_string - save string s in reversed order
 * @s: string variable pointer
 * Return: void
 */

void rev_string(char *s)
{
	unsigned long int _len;
	unsigned long int i;

	_len = _lenstr(s);
	_len++;

	char reverse_s[_len];

	for (i = 0 ; i < _len - 1 ; i++)
	{
		s = s + i;
	}
	for (i = 0 ; i < _len - 1 ; i++)
	{
		reverse_s[i] = *s;
		s = s - 1;
	}
	for (i = 0 ; i < _len - 1 ; i++)
	{
		*(s + i) = reverse_s[i];
	}
}

/**
 * _lenstr - calculate the _len of tring
 * @s: string variable pointer
 * Return: string _len
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
	s--;
	return (_len);
}
