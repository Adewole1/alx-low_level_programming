#include "main.h"

/**
 * print_triangle - Function to print square diagonally
 *
 * @n: number of times to print
 *
 * Return: nothing
 */

void print_triangle(int n)
{
	int i, j, k, diff;

	j = 1;

	if (n > 0)
	{
		while (n > 0)
		{
			diff = n - 1;

			if (diff >= 0)
			{
				for (i = 1; i <= diff; i++)
				{
					_putchar(' ');
				}

				for (k = 1; k <= j; k++)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			n--;
			j++;
		}
	} else
	{
		_putchar('\n');
	}
}
