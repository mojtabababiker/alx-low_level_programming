#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned.
 * @accept: character to be scaned
 * Return: length of the matched charscters
 */

unsigned int _strspn(char *s, char *accept)
{
	int sum = 0;
	char *temp;

	temp = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				sum++;
				s++;
				accept++;
			}
			else
			{
				accept = temp;
				sum = 0;
				break;
			}
		}
	}
	return (sum);
}
