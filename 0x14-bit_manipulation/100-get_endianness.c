#include "main.h"

/**
 * get_endianness - determains if the system is LE or BE
 * Return: 0 if BE or 1 LE
 */
int get_endianness(void)
{
	char *first_bit;

	unsigned int multi_bytes = 0x8000;

	first_bit = (char *) &multi_bytes;
	if (*first_bit == '1')
		return (0);
	return (1);
}
