#include <stdio.h>

/**
 * main - code entry point
 * Return: Always 0 (seccues)
 *
 * Basic C code that prints all possible combinations of single-digit numbers
 */

int main(void)
{
	char i;
	char kma;
	char nl;
	char sp;

	kma = 44;
	nl = 10;
	sp = 32;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(sp);
			putchar(kma);
		}
	}

	putchar(nl);
	return (0);
}
