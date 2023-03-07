#include "main.h"

/**
 *  _strchr - searches for the first occurrence of the character c
 *  in the string pointed to by the argument str.
 * @s: the string to search in
 * @c: the character to search for
 * Return: pointer to the character c location
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	s = "NULL";
	return (s);
}
