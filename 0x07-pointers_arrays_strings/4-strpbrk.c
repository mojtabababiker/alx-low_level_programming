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
	char *temp;

	temp = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			printf("%c <=> %c\n", *accept, *s);
			accept++;
		}
		accept = temp;
		s++;
	}

	return (temp = NULL);
}
