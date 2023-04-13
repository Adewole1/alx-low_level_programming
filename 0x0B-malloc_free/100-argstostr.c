#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - function to concatenate array of characters to allocated memory
 *
 * @ac: arguments count
 * @av: array of arguments
 *
 * Return: pointer to new array
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int k = 0, l = 0;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;

	new_str = (char *)malloc(k * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[l] = av[i][j];
			l++;
		}

		if (new_str[l] == '\0')
			new_str[l++] = '\n';
	}

	return (new_str);
}
