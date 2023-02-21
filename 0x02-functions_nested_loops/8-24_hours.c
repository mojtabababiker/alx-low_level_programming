#include "main.h"

/**
 * jack_bauer - print hours of the day
 */


void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48 ; i <= 50 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			for (k = 48 ; k <= 53 ; K++)
			{
				for (l = 48 ; l <= 57 ; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar(10);
				}
			}
			if ((i == 50) && (j == 51))
				break;
		}
	}
}
