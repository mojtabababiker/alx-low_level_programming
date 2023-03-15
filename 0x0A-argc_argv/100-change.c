#include <stdio.h>

int _atoi(char *s);
/**
 * main - code entry point
 * @argc: number of args
 * @argv: argumants list
 * Return: amount of change
 */

int main(int argc, char **argv)
{
	int change[] = {25, 10, 5, 2, 1};
	int remain = 0;
	int cash, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cash = _atoi(argv[1]);

	if (cash <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (cash > 0)
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (cash >= change[i])
			{
				cash -= change[i];
				remain++;
				break;
			}
		}
	}
	printf("%d\n", remain);
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
