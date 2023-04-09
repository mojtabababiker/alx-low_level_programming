#include "main.h"

/**
 * flip_bits - return the number of bits n would be filpped to get m
 * @n: first number
 * @m: second number
 * Return: nuber of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check_bit = 1;
	unsigned int flipped_bits = 0;
	int i = 0;

	for (i = 0 ; i < 64 ; i++)
	{
		if ((n & check_bit) != (m & check_bit))
		{
			flipped_bits++;
		}
		check_bit = check_bit << 1;
	}
	return (flipped_bits);
}
