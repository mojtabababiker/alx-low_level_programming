#include "main.h"

/**
 * multdigit - prints numbers that has more than one digit
 * @num: multydigit number
 */

void multdigit(int num)
{
	if (num / 10)
		multdigit(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * more_numbers - prints all numbers from `0` to `14` ten times
 */

void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
				multdigit(j);
			else
				_putchar(j + '0');
		}
	}
	_putchar('\n');
}
