#include "main.h"

/**
 * _islower - check if the given char is lower case letter
 * @c: the integer value of the char
 * Return: 1 if thechar is lower case letter, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
