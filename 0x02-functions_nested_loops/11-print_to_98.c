#include "main.h"

/**
 * print_to_98 - print numbers up to 98
 *
 * @n: starting integer
 * 
 * Return: nothing
 **/

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			_putchar(n);
			n++;
		}
		else if (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
}
