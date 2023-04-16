#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Allocate array based on range of value and fill it with values
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
