#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * rev_strings - save string s in reversed order
 * @s: string variable pointer
 * Return: void
 */

void rev_string(char *s)
{
	unsigned long int length;
	unsigned long int i;

	length = _lenstr(s);

	char reverse_s[length + 1];

	for (i = 0 ; i < length ; i++)
	{
		reverse_s[i] = *s;
		s = s - 1;
	}
	for (i = 0 ; i < length ; i++)
	{
		*(s + i) = reverse_s[i];
	}
}

/**
 * _lenstr - calculate the length of tring
 * @s: string variable pointer
 * Return: string length
 */

unsigned long int _lenstr(char *s)
{
	unsigned long int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	return (length);
}
