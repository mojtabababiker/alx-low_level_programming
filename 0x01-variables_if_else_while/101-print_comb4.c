#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * C program that prints all the possible uniqe compo of any three numbers
 */

int main(void)
{
	char i;
	char j;
	char k;
	char kma;
	char sp;
	char nl;

	kma = 44;
	sp = 32;
	nl = 10;

	for (i = 48 ; i  <= 50 ; i++)
	{
		for (j = i + 1 ; j <= 57 ; j++)
		{
			for (k = j + 1 ; k <= 57 ; j++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k != i - 3)
				{
					putchar(kma);
					putchar(sp);
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
