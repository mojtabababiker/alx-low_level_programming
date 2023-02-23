#include <stdio.h>

void print_fiba(unsigned long int finum);

/**
 * main - code enter point
 * Return: 0 in success
 */

int main(void)
{
	unsigned long int finum;

	finum = 4000000;

	print_fiba(finum);
	return (0);
}

/**
 * print_fiba - print the fibonacci numbers from 1, 2 to the number finum
 * @finum: the amount of the fibanocci numbers
 */

void print_fiba(unsigned long int finum)
{
	if (finum > 2)
	{
		unsigned long int prev[2];
		unsigned long int i;
		unsigned long int temp;
		unsigned long int sum;

		sum = 2;
		prev[0] = 1;
		prev[1] = 2;
		i = 0;
		while (i < finum)
		{
			temp = prev[0] + prev[1];
			if (temp % 2 == 0)
				sum = sum + temp;
			prev[0] = prev[1];
			prev[1] = temp;
			i++;
		}
		printf("%lu\n", sum);
	}
}
