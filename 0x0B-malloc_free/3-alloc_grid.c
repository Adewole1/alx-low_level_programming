#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Function to allocate memory for 2D array
 *
 * @width: column size
 * @height: row size
 *
 * Return: pointer to memory
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int *)malloc(width * height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(arr + i * width + j) = 0;
	}

	return (arr);
}
