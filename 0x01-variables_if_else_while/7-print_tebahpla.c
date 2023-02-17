#include <stdio.h>

/**
 * main - code enter point
 * Return: Alwasy 0 (success)
 *
 * Basic C program that prints the lower alphabets in
 * a reversed order
 */

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 122 ; i >= 97 ; i--)
		putchar(i);

	putchar(nl);

	return (0);
}
