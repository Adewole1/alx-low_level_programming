#include "main.h"

/**
 * more_numbers - print numbers with putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15, j++)
		{
			if (j > 20)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
	}

	_putchar('\n');
}
