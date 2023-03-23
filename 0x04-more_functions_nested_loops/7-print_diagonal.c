#include "main.h"

/**
 * print_diagonal - Function to print diagonal
 *
 * @n: number of times to print
 *
 * Return: int
 */

void print_diagonal(int n)
{
	int i, j, diff;

	j = n;

	if (n > 0)
	{
		diff = j - n;

		if (diff > 0)
		{
			for (i = 1; i <= diff; i++)
			{
				_putchar(32);
			}
		}

		_putchar(92);
		_putchar('\n');
	} else
	{
		_putchar(92);
		_putchar('\n');
	}
}
