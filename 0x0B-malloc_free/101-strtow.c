#include <stdlib.h>
#include "main.h"

int countwords(char *str);
void cpywords(char **retstr, char *str);

/**
 * strtow - convers string to words
 * @str: string to be convert
 * Return: pointer
*/
char **strtow(char *str)
{
	char **retstr;

	int words, i = 0, j = 0, chars = 0;
	int con = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = countwords(str);
	retstr = (char **) malloc((words  + 1) * sizeof(char *));

	if (!retstr)
		return (NULL);

	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			chars++;
			i++;
			con = 1;
		}
		if (con)
		{
			retstr[j] = (char *) malloc(chars * sizeof(char) + 1);
			if (!retstr[j])
				return (NULL);
			j++;
			con = 0;
		}
		chars = 0;
		i++;
	}
	retstr[j] = NULL;
	cpywords(retstr, str);
	return (retstr);
}

/**
 * countwords - get number of words in s
 * @str: pointer to string s
 * Return: number of words
*/

int countwords(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			words++;
		i++;
	}
	return (words);
}

/**
 * cpywords - copy words from str to retstr
 * @retstr: 2D array for words
 * @str: the string that copy from it
 * Return: void
*/

void cpywords(char **retstr, char *str)
{
	int  j = 0, i = 0, con = 0, k = 0;

	while (retstr[j] != NULL)
	{
		while (str[i] != ' ' && str[i] != '\0')
		{
			retstr[j][k] = str[i];
			k++;
			i++;
			con = 1;
		}
		if (con)
		{
			retstr[j][k] = '\0';
			k = 0;
			j++;
			con = 0;
		}
		i++;

	}

}
