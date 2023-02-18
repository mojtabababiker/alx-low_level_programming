#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * C program that prints all the possible uniqe compo of any three numbers
 */

int main(void)
{
	int i;
	int j;
	int k;
	int kma;
	int sp;
	int nl;

	kma = 44;
	sp = 32;
	nl = 10;

	for (i = 48 ; i  <= 57 ; i++)
	{
		for (j = i + 1 ; j <= 57 ; j++)
		{
			for (k = j + 1 ; k <= 57 ; k++)
			{
				putchar((char)i);
				putchar((char)j);
				putchar((char)k);
				if (i != 55 )
				{
					putchar((char)kma);
					putchar((char)sp);
				}
			}
		}
	}
	putchar(nl);
	return (0);
}
