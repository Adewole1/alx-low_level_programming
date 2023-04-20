#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Function to print based on another function
 *
 * @array: array to iterate
 * @size: size of array
 * @action: function to call
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
