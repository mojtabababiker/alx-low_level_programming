#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate it's length
 * Return: s length
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	if (*(s + 1) == '\0')
		return (len);
	return (len + _strlen_recursion(s + 1));
}
