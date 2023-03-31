#include "main.h"

/**
 * reverse_array - function to reverse array of integers
 *
 * @a: array
 * @n: number of elements of array
 *
 * Return: nothinh
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
