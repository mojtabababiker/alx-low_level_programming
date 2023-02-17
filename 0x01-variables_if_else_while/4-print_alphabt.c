#include <stdio.h>

/**
 * main - enter point
 * Return: Always 0 (success)
 *
 * Basic C program that print alphabet in lower case except
 * letter `e` and `q`
 **/

int main(void)
{
	char i;
	char nl;

	nl = 10;

	for (i = 97 ; i <= 122 ; i++)
	{
		if ((i == 101) || (i == 113))
			continue;
		putchar(i);
	}

	putchar(nl);

	return (0);
}
