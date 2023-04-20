#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function to print if an integer is in an array
 *
 * @array: array to search
 * @size: size of array
 * @cmp: function to use to conpare
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || !size || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);

		if (res != 0)
			return (i);
	}

	return (-1);
}
