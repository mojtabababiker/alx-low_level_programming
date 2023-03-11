#include <string.h>
#include <stdio.h>

int is_num(char *s);
int _atoi(char *s);

/**
 * main - add two positive numbers
 * @argc: argumants count
 * @argv: argumants list
 * Return: 0-seccuss 1-other-wise
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	int checknum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (argc < 3) /*argv contains only the  program name and one num*/
	{
		printf("%s\n", argv[argc - 1]);
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		checknum = is_num(argv[i]);

		if (!checknum)
		{
			printf("Error\n");
			return (1);
		}

		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_num - check if the provided str is a number
 * @s: pointer to string
 * Return: 1-it's_number 0-other-wise
 */

int is_num(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > '9' || s[i] < '0')
			return (0);
		i++;
	}
	return (1);
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
