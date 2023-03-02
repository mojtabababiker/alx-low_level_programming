#include "main.h"

/**
 * _strncat - concatenates n charcter from src to dest
 * @dest: string to concatenates to
 * @src: string that concatenates from
 * @n: number of charcters to be concatenates
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *catstr;
	int i;

	catstr = dest;
	i = 0;

	while ((i < n) && (*src != '\0'))
	{
		if (*dest == '\0')
		{
			*dest = *src;
			dest++;
			src++;
			i++;

			*dest = '\0';
		}
		else
		{
			dest++;
		}
	}
	return (catstr);
}
