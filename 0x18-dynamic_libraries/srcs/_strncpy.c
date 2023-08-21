#include "main.h"

/**
 * _strncpy - copy n number of character from src to dest
 * @dest: string to copy to it arg1
 * @src: string to copy from arg2
 * @n: number of charcters to copy
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *cstr;
	int i;
	int j;

	cstr = dest;
	i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
		{
			for (j = i ; j < n ; j++)
				dest[j] = '\0';
			break;
		}
		dest[i] = src[i];
		i++;
	}
	return (cstr);
}
