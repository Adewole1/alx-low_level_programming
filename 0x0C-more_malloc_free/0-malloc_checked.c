#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function to allocate memory
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
