#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - function to create array of characters to allocated memory
 *
 * @str: string to fill memory with
 *
 * Return: pointer to new array
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size = 0;

	while (str[size] != '\0)
	{
		size++;
	}

	new_str = (char *)calloc(size, sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
