#include "main.h"
#include <string.h>

int checkpalindrome(char *s, char *e);

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
	palindrome = checkpalindrome(s, (s + (len - 1)));

	return (palindrome);
}

/**
 * checkpalindrome - compare one charcter to anther from the other side
 * @s: 1st emelnt in the string
 * @e: last elemnt in the string
 * Return: 1-if match 0-otherwise
 */

int checkpalindrome(char *s, char *e)
{
	if (s > e || s == e)
		return (1);

	if (*s != *e)
		return (0);
	return (checkpalindrome(s + 1, e - 1));
}
