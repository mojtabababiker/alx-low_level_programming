#include "main.h"

/**
 * _strlen - return the length of srting s
 * @s: string variable pointer
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
