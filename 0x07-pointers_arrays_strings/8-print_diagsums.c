#include "main.h"

/**
 * print_diagsums - calculate and print the sum of
 * diagonals of square matrix
 * @a: pointer to the first elements of the matrix
 * @size: the size of each array in the matrix (number of columns&rows)
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum, sum2;
	int *p;

	p = a + (size - 1);
	i = 0;
	j = 0;
	sum = 0;
	sum2 = 0;

	while (i < size)
	{
		sum = sum + *a;
		a = a + (size + 1);
		i++;
	}
	printf("%d, ", sum);
	while (j < size)
	{
		sum2 = sum2 + *p;
		p = p + (size - 1);
		j++;
	}
	printf("%d\n", sum2);
}
