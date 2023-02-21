#include "main.h"
/**
 * _islower - determine `c` is lower case or not
 * @c: argumants1 a charcter in int data type
 * Return: 1 if the litter is lower-case other-wise 0
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
