#include "main.h"

/**
 * _isalpha - check if the given char is an alphabet
 * @c: the int value of the char
 * Return: 1 if the char is alphabet, else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
