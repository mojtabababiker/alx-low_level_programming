#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array integer
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int *prevers;
	int temp;

	prevers = a + (n - 1);

	while (a < prevers)
	{
		temp = *a;
		*a = *prevers;
		*prevers = temp;

		a++;
		prevers--;
	}
}
