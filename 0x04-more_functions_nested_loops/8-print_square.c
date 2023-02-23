#include "main.h"

/**
 * print_square - print `size` * `size` square using # charcter
 * @size: the size of square
 */

void print_square(int size)
{
	int i;
	int j;

	if (sizr > 0)
	{
		for (i = 0 ; i <  size ; i++)
		{
			for (j = 0 ;  j < size ; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
