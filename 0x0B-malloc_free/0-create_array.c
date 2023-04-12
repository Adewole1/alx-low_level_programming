#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - function to create array of characters to allocated memory
 *
 * @size: size of memory to allocate
 * @c: character to fill memory with
 *
 * Return: pointer to new array
 */

char *create_array(unsigned int size, char c)
{
	str = (char *)calloc(size, sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
