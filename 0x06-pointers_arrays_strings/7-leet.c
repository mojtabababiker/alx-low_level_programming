#include "main.h"

/**
 * leet - encode string into 1337
 * @str: string to encode, first arg
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i;
	char *codedstr;

	char letters[11] = "aAeEoOtTlL";
	int code[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1,};
	codedstr = str;

	while (*str != '\0')
	{
		for (i = 0 ; i < 10 ; i++)
		{
			if (*str == letters[i])
			{
				*str = code[i] + '0';
				break;
			}
		}
		str++;
	}
	return (codedstr);
}
