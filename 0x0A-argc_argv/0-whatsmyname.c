#include <stdio.h>

/**
 * main - print the name of what the program called with
 * @argc: argumants count
 * @argv: list of passed args
 * Return: 0-seccuss 1-other-wise
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
