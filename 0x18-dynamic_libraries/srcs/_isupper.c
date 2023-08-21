#include "main.h"

/**
 * _isuuper  - check if the char c is an upper case letter
 * @c: integer value of the char c
 * Return: 1 if the char is an upper case letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
