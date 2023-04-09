#include "main.h"

/**
 * clear_bit - sets a value of bit to 0 ant index
 * @n: a pointer to the number
 * @index: the index to reset the bit at
 * Return: 1 if success, -1 other wise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int reset_bit = 1;

	if (index > 64 || n == NULL)
		return (-1);
	reset_bit = reset_bit << index;
	if (reset_bit & (*n))
	{
		reset_bit = ~reset_bit;
		*n = (*n) & reset_bit;
	}
	return (1);
}
