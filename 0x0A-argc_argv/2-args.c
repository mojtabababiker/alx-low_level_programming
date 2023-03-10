#include <stdio.h>

/**
 * main - print all argumants recieved by the program
 * @argc: number of args recieved by the program
 * @argv: argumants list
 * Return: 0-seccuss
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
