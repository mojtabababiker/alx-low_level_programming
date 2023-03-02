#include "main.h"

/**
 * string_toupper - convert lower case letter int string to uppers
 * @str: string variable pointer
 * Return: pointer to  str
 */

char *string_toupper(char *str)
{
	char *upstr;

	upstr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = 'A' + (*str - 'a');
		str++;
	}
	return (upstr);
}
