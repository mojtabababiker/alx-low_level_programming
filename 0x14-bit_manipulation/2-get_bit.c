#include "main.h"

/**
 * get_bit - return the index of a given bit
 * @n: the number to get bit from it
 * @index: the index to get the bit on it
 * Return: the bit at index index, or -1 if it failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check_bit = 1;

	if (index > 64)
		return (-1);
	check_bit = check_bit << (index);
	if (check_bit & n)
		return (1);
	return (0);
}
