#include "main.h"

/**
 * rot13 - code string according to rot13
 * @str: string variable pointer to be coded
 * Return: pointer to the coded string
 */

char *rot13(char *str)
{
	int i;
	char *codedstr;

	char chr[] =   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char chr13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	codedstr = str;

	while (*str != '\0')
	{
		for (i = 0 ; i <= 52 ; i++)
		{
			if (*str == chr[i])
			{
				*str = chr13[i];
				break;
			}
		}
		str++;
	}
	return (codedstr);
}
