#include "main.h"

/**
 * print_array - format array elemnts as they in an array anf print thim
 * @a: integer variable array
 * @n: number of elemnts
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
