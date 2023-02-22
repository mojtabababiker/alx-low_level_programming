#include "main.h"

/**
 * print - print multi-digits integer using _putchar
 * @num: multi-digit integer sent from "times_table"
 */

void print(int num)
{
	if (num / 10)
	{
		print(num / 10);
	}

	_putchar('0' + (num % 10));
}

/**
 * times_table - Print the table of 0 to 9
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			result = i * j;
			if (result > 9)
			{
				_putchar(' ');
				print(result);
				_putchar(',');
			}
			else
			{
				if (j == 0)
				{
					_putchar('0' + result);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
