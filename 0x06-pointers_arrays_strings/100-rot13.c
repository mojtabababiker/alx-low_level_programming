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

	char first13[] = "abcdefghijklm";
	char sec13[] = "nlopqrstuvwxyz";

	codedstr = str;

	while (*str != '\0')
	{
		for (i = 0 ; i <= 13 ; i++)
		{
			if (*str == first13[i])
			{
				*str = sec13[i];
				break;
			}
			else if (*str == sec13[i])
			{
				*str = first13{i];
				break;
			}
		}
		str++;
	}
	return (codedstr);
}
