#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_changed - function to allocate memory
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to memory
 */

void *malloc_changed(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		return (NULL);

	return (str);
}
