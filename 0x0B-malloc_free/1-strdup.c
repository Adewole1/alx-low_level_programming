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
 * _strdup - function to create array of characters to allocated memory
 *
 * @str: string to fill memory with
 *
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i = 0;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = _strlen_recursion(str);

	new_str = (char *)calloc(size, sizeof(char));

	if (new_str == NULL)
		return (NULL);

	while (i < size && str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
