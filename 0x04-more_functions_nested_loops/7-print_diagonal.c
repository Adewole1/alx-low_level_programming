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
		while (n > 0)
		{
			diff = j - n;

			if (diff > 0)
			{
				for (i = 1; i <= diff; i++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
			n--;
		}
	} else
	{
		_putchar('\n');
	}
}
