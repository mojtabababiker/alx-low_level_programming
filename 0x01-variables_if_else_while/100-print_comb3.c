#include<stdio.h>

/**
 * main - code entry point
 * Return: Alwasy 0 (success)
 *
 * C program that shows the all possible different combinations of two digits
 */

int main(void)
{
	char i;
	char j;
	char kma;
	char sp;
	char nl;

	kma = 44;
	sp = 32;
	nl = 10;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = i+1 ; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57-1)
			{
				putchar(kma);
				putchar(sp);
			}
		}
	}

	putchar(nl);
	return (0);
}
