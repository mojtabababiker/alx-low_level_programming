#include "main.h"
#include <stdio.h>


int fizzbuzz(int num);

/**
 * main - print all numbers from `0` to `100`, replace numbers that multiply by
 * 3 and 5 with FizzBuzz, Fizz if the number is multiply by 3 only or Buzz if
 * number is multiply by 5 only
 * Return: 0 success, 1 other-wise
 */

int main(void)
{
	int i;
	int chk;

	for (i = 1 ; i  <= 100 ; i++)
	{
		chk = fizzbuzz(i);
		switch (chk)
		{
		case 1:
			printf("%d", i);
			if (i != 100)
				printf(" ");
			break;
		case 2:
			printf("Fizz ");
			break;
		case 3:
			printf("Buzz");
			if (i != 100)
				printf(" ");
			break;
		case 4:
			printf("FizzBuzz ");
		default:
			break;
		}
	}
	printf("\n");
	return (0);
}

/**
 * fizzbuzz - chick if the number is multiply by 3 or 5, or both
 * @num: integer number to be chick
 * Return: indicators
 * 1 => not multiply by both 3 and 5
 * 2 => multiply only by 3
 * 3 => multiply only by 5
 * 4 => multiply by both 3 and 5
 */

int fizzbuzz(int num)
{
	if ((num % 3 == 0) && (num % 5 == 0))
		return (4);
	else if (num % 5 == 0)
		return (3);
	else if (num % 3 == 0)
		return (2);
	else
		return (1);
}
