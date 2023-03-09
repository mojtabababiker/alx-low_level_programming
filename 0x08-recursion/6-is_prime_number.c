#include "main.h"

int _sqrt_recour(int n);
int is_prime(int n, int j);

/**
 * is_prime_number - check if the number n is prime
 * @n: integer number to be checked
 * Return: 1=>prime 0=>other-wise
 */

int is_prime_number(int n)
{
	int j;
	int primee;

	j = _sqrt_recour(n);
	primee = is_prime(n, j);

	return (primee);
}

/**
 * is_prime - check if the number is prime
 * @n: number
 * @j: numbers from 2 to sqrt(n)
 * Return: indicator if 1 primw, 0 other-wise
 */

int is_prime(int n, int j)
{
	if (2 * j == n)
		return (0);
	if (j != 2)
		is_prime(n, j - 1);
	return (1);
}

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
 * _sqrt_recour - calculate the square root for integer n
 * @n: intger to claculate it's sqrt
 * Return: n sqrt
 */

int _sqrt_recour(int n)
{
	int _sqrt;

	if (n < 0)
		return (-1);
	_sqrt = get_sqrt(n, -1);

	return (_sqrt);
}
