#include "main.h"

int primee(int n, int i);

/**
 * is_prime_number - determine if the number is prime number or not
 * @n: number to check
 * Return: 1-prime 0-notprime
 */
int is_prime_number(int n)
{
	int prm;

	int i = 2;

	prm = primee(n, i);
	return (prm);
}

/**
 * primee - check if number is prime
 * @n: number to check
 * @i: all numbers from 2 to n
 * Return: 1-if prime 0-else
 */

int primee(int n, int i)
{
	if (n == 0 || n == 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);

	i++;
	primee(n, i);
}
