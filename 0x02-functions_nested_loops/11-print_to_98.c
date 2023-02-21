#include <stdio.h>

void down_to_limit(int n, int lim);
void up_to_limit(int n, int lim);

/**
 * print_to_98 - print all numbers from the entered number to 98
 *
 * @n: user entered number
 */

void print_to_98(int n)
{
	int _limit = 98;

	if (n > 98)
		down_to_limit(n, 98);
	else if (n < 98)
		up_to_limit(n, 98);
	else
		printf("%d\n", _limit);
}

/**
 * down_to_limit - when the enterd number is greater than 98 use this func
 * @lim: local variable that holds the limit value
 * @n: the number tht entered by the user
 */

void down_to_limit(int n, int lim)
{
	int i;

	for (i = n ; i >= lim ; i--)
	{
		printf("%d", i);
		if (i != lim)
			printf(", ");
	}
	putchar(10);
}


/**
 * up_to_limit - when the enterd number is greater than 98 use this func
 * @lim: local variable that holds the limit value
 * @n: the number tht entered by the user
 */

void up_to_limit(int n, int lim)
{
	int i;

	for (i = n ; i <= lim ; i++)
	{
		printf("%d", i);
		if (i != lim)
			printf(", ");
	}
	putchar(10);
}
