#include "main.h"

/**
 * _memset - fill memory with b
 * @s: string to fill
 * @b: char to fill with
 * @n: number of char b to use
 * Return: poim=nter to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *chr = s;

	for (i = 0 ; i < n ; i++)
	{
		*s = b;
		s++;
	}
	return (chr);
}
