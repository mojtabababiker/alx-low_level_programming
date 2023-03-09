#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if the string s is a palindrome or not
 * @s: string to check
 * Return: 1-if palindrome 0- else
 */

int is_palindrome(char *s)
{
	int palindrome;

	int len = strlen(s);

	if (len == 1 || len == 0)
		return (1);
	palindrome = checkpalindrome(s, len);

	return (palindrome);
}

/**
 * checkpalindrome - compare one charcter to anther from the other side
 * @s: the string to check
 * @len: string length
 * Return: 1-if match 0-otherwise
 */

int checkpalindrome(char *s, int len)
{
	if (s > (s + (len - 1)))
		return (1);
	if (*s != *(s + (len - 1)))
		return (0);
	return (checkpalindrome((s + 1), (len - 1)));
}
