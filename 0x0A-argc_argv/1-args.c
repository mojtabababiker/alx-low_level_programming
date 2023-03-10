#include <stdio.h>

/**
 * main - print number of agrs provided to the program
 * @argc: number of args
 * @argv: argumants list
 * Return: 0-seccuss 1-other0wise
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
