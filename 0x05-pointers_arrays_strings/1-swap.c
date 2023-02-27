#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integet pointer
 * @b: seconde integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
