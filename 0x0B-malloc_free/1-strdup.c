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
	unsigned int i;
	unsigned int size;

	size = _strlen_recursion(str);

	new_str = (char *)calloc(size, sizeof(char));

	if (size == 0 || new_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str += i;
		new_str[i] = str[0];
	}

	return (new_str);
}
