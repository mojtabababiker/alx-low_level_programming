#include <stdio.h>

/**
 * main - as an entry point
 * Return: Always 0 (success)
 *
 * Basic C program thet print all charcter from [a-z]
 */

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 97 ; i <= 122 ; i++)
		putchar(i);

	putchar(nl);

	return (0);
}
