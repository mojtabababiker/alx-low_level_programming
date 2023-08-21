#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string arg1
 * @src: source string arg2
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *catstr;

	catstr = dest;

	while (*src != '\0')
	{
		if (*dest == '\0')
		{
			*dest = *src;

			src++;
			dest++;

			*dest = '\0';
		}
		else
		{
			dest++;
		}
	}
	return (catstr);
}
