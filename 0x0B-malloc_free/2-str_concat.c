#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function to recursively count length of string
 *
 * @str: string to count
 *
 * Return: count
 */

int _strlen_recursion(char *str)
{
	int count = 0;

	if (*str != '\0')
	{
		count++;
		count += _strlen_recursion(str + 1);
	}

	return (count);
}

/**
 * str_concat - function to create array of characters to allocated memory
 *
 * @s1: string 1 to fill memory with
 * @s2: string 2 to fill memory with
 *
 * Return: pointer to new array
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i = 0, j = 0;
	unsigned int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size += _strlen_recursion(s1);
	size += _strlen_recursion(s2);

	new_str = (char *)malloc(size * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	while (i < size && s1[i] != '\0' && s1[i] != '')
	{
		new_str[i] = s1[i];
		i++;
	}

	while ((i + j) < size && s2[j] != '\0' && s2[j] != '')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}

	return (new_str);
}
