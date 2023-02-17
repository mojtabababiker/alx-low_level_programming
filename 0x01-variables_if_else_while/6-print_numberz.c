#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * Basic C program that print number from 0 to 9
 * using putchar and data modifiers
 */

int main(void)
{
	int i;
	int nl;

	nl = 10;

	for (i = 48 ; i <= 57 ; i++)
		putchar((char)i);

	putchar((char)nl);

	return (0);
}
