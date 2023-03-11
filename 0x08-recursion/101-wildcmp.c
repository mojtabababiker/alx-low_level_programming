#include "main.h"

int _cmp(char *s1, char *s2, int len1, int len2, int i, int j);
int _strlen(char *s);
/**
 * wildcmp - compire using wild card *
 * @s1: first string
 * @s2: second string
 * Return: 1-match 0-mismatch
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0, len1, len2;

	lent1 = _strlen(s1);
	len2 = _strlen(s2);

	return (_cmp(s1, s2, len1, len2, i, j));
}

/**
 * _cmp - compire two strings
 * @s1: first string
 * @s2: second string
 * @len1: first string length
 * @len2: second string length
 * @i: current index of s1
 * @j: second index of s2
 * Return: 1-match 0-other-wise
 */

int _cmp(char *s1, char *s2, int len1, int len2, int i, int j)
{
	if (s1[i] != s2[j] && (s1[i] != '*' && s2[j] != '*'))
		return (0); /*mismatch*/
	if ((s1[i] == s2[j] && s1[i] == '\0') ||
	    (s1[i] == '*' && s2[j] == '\0') ||
	    (s2[j] == '*' && s1[i] == '\0'))
		return (1); /*match*/
	if (s1[i] == '*')
	{
		if (s1[i + 1] == '*')
			return (_cmp(s1, s2, len1, len2, ++i, j));
		j = len2 - (len1 - i);/*move j to equivalent position of i*/
		return (_cmp(s1, s2, len1, len2, ++i, ++j));
	}
	if (s2[j] == '*')
	{
		if (s2[j + 1] == '*')
			return (_cmp(s1, s2, len1, len2, i, ++j));
		i = len1 - (len2 - j);/*move i to equivalent position of j*/
		return (_cmp(s1, s2, len1, len2, ++i, ++j));
	}
	return (_cmp(s1, s2, len1, len2, ++i, ++j));
}


/**
 * _strlen - return the length of srting s
 * @s: string variable pointer
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
