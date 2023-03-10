#include "main.h"
#include <stdio.h>

/**
 * get_sqrt - calculate the square root for integer n
 * using Repeated Subtraction Method
 * @n: intger to claculate it's sqrt
 * @odd: odd number to subtract
 * Return: number of subtracting(sqrt)
 */

int get_sqrt(int n, int odd)
{
	int sum;

	odd += 2;
	sum = 1;

	if ((n - odd) == 0)
	{
		return (1);
	}
	else if ((n - odd) < 0)
	{
		return (-2147483648);
	}
	else
	{
		sum = sum + get_sqrt(n - odd, odd);
	}
	return (sum);
}

/**
 * _sqrt_recursion - calculate the square root for integer n
 * @n: intger to claculate it's sqrt
 * Return: n sqrt
 */

int _sqrt_recursion(int n)
{
	int _sqrt;

	if (n < 0)
		return (-1);

	_sqrt = get_sqrt(n, -1);

	if (_sqrt < 0)
		return (-1);
	else
		return (_sqrt);
}
