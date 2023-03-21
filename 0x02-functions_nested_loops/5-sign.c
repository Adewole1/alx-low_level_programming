#include "main.h"

/**
 * print_sign - Function to check a number
 *
 * @n: number to be checked
 *
 * Return: int
 */
int _islower(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	} else
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
}
