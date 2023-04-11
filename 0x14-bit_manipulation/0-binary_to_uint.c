#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0s and 1s
 * Return: the converted number or 0 if its failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len = 0, i = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	if (len == 0)
		return (0);
	for (i = 0 ; i < len ; i++)
	{
		if (i > 63)
			break;
		if (b[len - 1 - i] != '0' && b[len - 1 - i] != '1')
			return (0);
		else if  (b[len - 1 - i] == '1')
			num = num + (1 << i);
	}
	return (num);
}
