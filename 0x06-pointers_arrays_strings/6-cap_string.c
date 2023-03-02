#include "main.h"

int chkword(char c);

/**
 * cap_string - capitaliazed words
 * @str: string to capitaliazed
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	char *cwstr;
	int word;

	cwstr = str;

	if (*str >= 'a' && *str <= 'z')
		*str = 'A' + (*str - 'a');

	while (*str != '\0')
	{
		word = chkword(*str);

		if (word)
		{
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
			{
				*(str + 1) = 'A' +  *(str + 1) - 'a';
				str++;
			}
			else
			{
				str++;
			}
		}
		else
		{
			str++;
		}
	}
	return (cwstr);
}

/**
 * chkword - search for word sepretors
 * @c: charcter to  be check
 * Return: 1- if the charcter is word sepretor 0- other-wise
 */

int chkword(char c)
{
	if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?')
		return (1);
	else if (c == '(' || c == ')' || c == '{' || c == '}' || c == 34)
		return (1);
	else if (c == 32 || c == 9 || c == 10 || c == 13)
		return (1);
	else
		return (0);
}
