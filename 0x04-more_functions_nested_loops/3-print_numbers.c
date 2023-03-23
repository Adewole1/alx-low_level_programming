#include "main.h"

/**
 * print_numbers - print numbers with putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
