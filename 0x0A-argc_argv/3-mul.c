#include <stdio.h>

int _atoi(char *s);

/**
 * main - multiplies two numbers provided by argv
 * @argc: argumants count
 * @argv: argumants list
 * Return: 0-seccuss 1-other-wise
 */

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc < 3 || argc > 4)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}

/**
 * _atoi - convert the number in string to integer values
 * @s: string variable pointer
 * Return: the ineger value of the number, if there is no number in s return 0
 */

int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		if (num > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
