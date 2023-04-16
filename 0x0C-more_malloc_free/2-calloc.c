#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - Function to allocate memory and fill it with 0
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Pointer to new array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	mem = malloc(total_size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		mem[i] = 0;

	return (mem);
}
