#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring
 * @haystack: main string
 * @needle: substring to find
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub;
	char *temp;

	if (*needle == '\0')
		return (haystack);

	temp = needle;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			sub = haystack;

			while (*needle != '\0')
			{
				if (*haystack != *needle)
				{
					sub = NULL;
					needle = temp;

					break;
				}
				needle++;
				haystack++;
			}
			if (sub != NULL)
				return (sub);
		}
		haystack++;
	}
	return (sub = NULL);
}
