#include <stdio.h>

void print_fiba(int finum);

/**
 * main - code enter point
 * Return: 0 in success
 */

int main(void)
{
	int finum;

	finum = 50;

	print_fiba(finum);
	return (0);
}

/**
 * print_fiba - print the fibonacci numbers from 1, 2 to the number finum
 * @finum: the amount of the fibanocci numbers
 */

void print_fiba(int finum)
{
	if (finum > 2)
	{
		unsigned int prev1;
		unsigned int prev2;
		int i;
		unsigned int temp;

		prev1 = 1;
		prev2 = 2;
		i = 0;
		while (i <= 98)
		{
			if (i == 0)
			{
				printf("%u, ", prev1);
			}
			else if (i == 1)
			{
				printf("%u, ", prev2);
			}
			else
			{
				temp = prev1 + prev2;
				printf("%u", temp);
				if (i != 98)
					printf(", ");
				prev1 = prev2;
				prev2 = temp;
			}
			i++;
		}
		putchar(10);
	}
}
