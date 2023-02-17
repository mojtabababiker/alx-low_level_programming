#include <stdio.h>

/**
 * main - code enter point
 * Return: Always 0 (success)
 *
 * Basic C program that print base 16 (hex) numbers
 */

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 48 ; i <= 57 ; i++)
		putchar(i);
	for (i = 97 ; i <= 102 ; i++)
		putchar(i);
	putchar(nl);

	return (0);
}
