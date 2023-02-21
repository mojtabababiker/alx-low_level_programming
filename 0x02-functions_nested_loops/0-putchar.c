#include "main.h"

/**
 * putchr - print the word '_putchar' new line and return 0
 * @ch[8]: string array hold the word we aim to print
 * Return: return 0 when success non zero other-wise
 */

int putchr(void)
{
	int i;
	char ch[8];

	ch[] = "_putchar";

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(ch[i]);
	}
	_putchar(10);
	return (0);
}
