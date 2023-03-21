#include "main.h"

/**
 * print_last_digit - Function to print last digit of a number
 *
 * @n: number to be checked
 *
 * Return: int
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	mod = n % 10;

	_putchar(mod + '0');
	return (mod);
}
