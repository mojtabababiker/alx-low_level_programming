#include "main.h"

/**
 * _isdigit - chick for a digi (0-9)
 * Return: 1 if the charcter os digit, 0 other-wise
 * @c: the charcter will  chicked
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
