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

	codedstr = str;

	while (*str != '\0')
	{
		for (i = 0 ; i <= 13 ; i++)
		{
			if (*str >= 'a' && *str <= 'm' ||
			    *str >= 'A' && *str <= 'M')
			{
				*str = *str + 13;
				break;
			}
			else if (*str >= 'n' && *str <= 'z' ||
				 *str >= 'N' && *str <= 'Z')
			{
				*str = *str - 13;
				break;
			}
		}
		str++;
	}
	return (codedstr);
}
