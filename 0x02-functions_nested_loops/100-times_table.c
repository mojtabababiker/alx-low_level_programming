#include "main.h"

/**
 * _print - print multi-digit number using _putchar
 * @mult: multi digit number
 */

void _print(int mult)
{
	if (mult / 10)
	{
		_print(mult / 10);
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
					_putchar(',');
				}
				else
				{
					if (mult <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(mult + '0');
						_putchar(',');
					}
					else if ((mult > 9) && (mult < 100))
					{
						_putchar(' ');
						_putchar(' ');
						_print(mult);
						_putchar(',');
					}
					else if ((mult > 100) && (mult < 1000))
					{
						_putchar(' ');
						_print(mult);
						_putchar(',');
					}
					else
					{
						_print(mult);
						_putchar(',');
					}
				}
			}
			_putchar('\n');
		}
	}

}
