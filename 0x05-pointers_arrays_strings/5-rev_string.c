#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * rev_string - save string s in reversed order using bupple method
 * @s: string variable pointer
 * Return: void
 */

void rev_string(char *s)
{
	unsigned long int _len;
	unsigned long int i;
	char *reverse_s;
	char temp;

	_len = _lenstr(s);
	reverse_s = s + (_len - 1);

	for (i = 0 ; i <= _len ; i++)
	{
		if (s >= reverse_s - i)
			break;
		temp = *s;
		*s = *(reverse_s - i);
		*(reverse_s - i) = temp;
		s++;
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
