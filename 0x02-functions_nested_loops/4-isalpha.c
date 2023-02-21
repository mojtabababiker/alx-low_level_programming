#include "main.h"

/**
 * _isalpha - check if the `c` charcter is alphabets
 * @c: arg1
 * Return: 1 if `c` is letter 0 other-wise
 */

int _isalpha(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
