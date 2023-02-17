#include <stdio.h>

/**
 * main - code entry point
 * Return: Always 0 (seccues)
 *
 * Basic C code that prints all possible combinations of single-digit numbers
 */

int main(void)
{
	int i;
	int kma;
	int nl;
	int sp;

	kma = 44;
	nl = 10;
	sp = 32;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar((char)i);
		if (i != 57)
		{
			putchar((char)kma);
			putchar((char)sp);
		}
	}

	putchar((char)nl);
	return (0);
}
