#include "main.h"

/**
 * _isupper - check for upper-case charcter
 * Return: 1 if the charcter in upper-case, 0 other-wise
 * @c: charcter that need to chick
 */

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
