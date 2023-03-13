#include "main.h"

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

	if (str == NULL)
		return (NULL);
	dup = (char *) malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);
	for (i = 0 ; i < sizeof(str) ; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
