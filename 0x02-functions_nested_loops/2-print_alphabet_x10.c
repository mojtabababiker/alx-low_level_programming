#include "main.h"

/**
 * print_alphabet_x10 - print litters from a-z 10 times in 10 lines
 */


void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 97 ; j <= 122 ; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
