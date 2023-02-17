#include <stdio.h>

/**
 * main - enter point
 * Reaturn: Always 0 (success)
 *
 * C basic program that print all lower case alphabet and upper case ones
 */

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 97 ; i <= 122 ; i++)
		putchar(i);
	for (i = 65 ; i <= 90 ; i++)
		putchar(i);
	putchar(nl);

	return (0);
}
