#include <stdio.h>

/**
 * main - enter point for the program
 * Return: Always 0 (success)
 *
 * Basic C program that prints all number based 10
 */

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 48 ; i <= 57 ; i++)
		putchar(i);
	putchar(nl);

	return (0);
}
