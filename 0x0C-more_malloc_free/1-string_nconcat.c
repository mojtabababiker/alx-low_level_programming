#include "main.h"

/**
 * string_nconcat - concatenates (append) n chars from string s2 to string s1
 * @s1: 1s string
 * @s2: 2nd string
 * @n: number of chars to be appended
 * Return: pointer to the new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	char empty = '\0';

	if (s1 == NULL)
		s1 = &empty;
	if (s2 == NULL)
		s2 = &empty;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; s1[i] ; i++)
		ptr[i] = s1[i];
	for (i = i, j = 0 ; i < len1 + n ; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
