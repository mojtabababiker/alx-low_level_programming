#include "main.h"

/**
 * _print - print multi-digit number using _putchar
 * @mult: multi digit number
 * @digit: number of difits
 * @ocall: original call, print the spaces only on the first function call
 */

void _print(int mult, int digit, int ocall)
{
	int i;

	if ((ocall) && (digit < 4))
	{
		for (i = 0 ; i < (4 - digit) ; i++)
			_putchar(' ');
	}
	if (mult / 10)
	{
		ocall = 0;
		_print(mult / 10, digit, ocall);
	}

	_putchar((mult % 10) + '0');
}

/**
 * print_times_table - print number table from 0 to num
 * @num: user enered number determind the last table to display
 */

void print_times_table(int num)
{
	int i;
	int j;
	int mult;

	if ((num >= 0) && (num <= 15))
	{
		for (i = 0 ; i <= num ; i++)
		{
			for (j = 0  ; j <= num ; j++)
			{
				mult = i * j;
				if (j == 0)
				{
					_putchar(mult + '0');
					if (num != 0)
						_putchar(',');
				}
				else
				{
					if (mult <= 9)
						_print(mult, 1, 1);
					else if ((mult > 9) && (mult < 100))
						_print(mult, 2, 1);
					else if ((mult > 99) && (mult < 1000))
						_print(mult, 3, 1);
					else
						_print(mult, 4, 1);
					if (j != num)
						_putchar(',');
				}
			}
			_putchar('\n');/*new line at end of each number "i"*/
		}
	}

}
