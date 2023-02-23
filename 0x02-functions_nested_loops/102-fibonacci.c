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
		unsigned long int prev[2];
		int i;
		unsigned long int temp;

		prev[0] = 1;
		prev[1] = 2;
		i = 0;
		while (i < 50)
		{
			if (i == 0)
			{
				printf("%lu, ", prev[0]);
			}
			else if (i == 1)
			{
				printf("%lu, ", prev[1]);
			}
			else
			{
				temp = prev[0] + prev[1];
				printf("%lu", temp);
				if (i != 49)
					printf(", ");
				prev[0] = prev[1];
				prev[1] = temp;
			}
			i++;
		}
		putchar(10);
	}
}
