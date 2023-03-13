#include "main.h"

unsigned int _strlen(char *s);
/**
 * _strdup - duplicate the str function
 * @str: the string to duplicate
 * Return: pionter to the new duplicated string, NULL if str is NULL
 * or NULL if the insufficient
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int lenstr;

	if (str == NULL)
		return (NULL);

	lenstr = _strlen(str);
	dup = (char *) malloc(lenstr);

	if (dup == NULL)
		return (NULL);
	for (i = 0 ; i < lenstr ; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

/**
 * _strlen - clculate the length of string s
 * @s: string to get its length
 * Return: length of s
 */

unsigned int _strlen(char *s)
{
	static unsigned int lenstr = 1;

	if (!*s)
		return (lenstr);
	lenstr++;
	return (_stlen(++s));
}
