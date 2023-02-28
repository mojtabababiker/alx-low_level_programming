#include "main.h"

unsigned long int _lenstr(char *s);

/**
 * _strcpy(char *dest, char *src)- copy string src to the dest
 * @dest: memory location to copy the string in
 * @src: the string to copy
 * Return: memory location that contains the copied string
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long int _len;
	unsigned long int i;

	_len = _lenstr(src);

	for (i = 0 ; i <= _len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
 * _lenstr - calculate the length of s string
 * @s: string variable pointer
 * Return: length of s string
 */

unsigned long int _lenstr(char *s)
{
	unsigned long int _len;

	while (*s != '\0')
	{
		_len++;
		s++;
	}
	return (++_len);
}
