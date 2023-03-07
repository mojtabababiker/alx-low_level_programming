#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the string s of any of the
 *  bytes in the string accept
 * @s: string to look for match on it
 * @accept: string looking for match from it
 * Return: pointer for the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	char *match;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
