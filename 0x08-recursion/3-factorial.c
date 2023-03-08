#include "main.h"

/**
 * factorial - calculate factorial n
 * @n: integer number to calculate it's factorial
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * (factorial(n - 1)));
}
