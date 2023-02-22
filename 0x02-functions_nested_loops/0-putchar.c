#include "main.h"
#include <stdio.h>

/**
 * main -code entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	putchr();
	return (0);
}

/**
 * putchr - print the word '_putchar' new line and return 0
 * @ch[8]: string array hold the word we aim to print
 * Return: return 0 when success non zero other-wise
 */

int putchr(void)
{
	int i;
	int x;
	int ch[] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0 ; i < 8 ; i++)
	{
		x = ch[i];
		_putchar(x);
	}
	_putchar(10);
	return (0);
}
