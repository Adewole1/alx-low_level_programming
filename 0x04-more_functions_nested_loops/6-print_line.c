#include "main.h"

/**
 * print_line - Print the underscore
 *
 * @n: Number of times to print
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
