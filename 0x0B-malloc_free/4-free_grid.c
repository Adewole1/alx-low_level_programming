#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Function to free allocated memory of 2D array
 *
 * @grid: pointer to array to be freed
 * @height: row size of array to be freed
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
