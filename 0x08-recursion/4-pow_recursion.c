#include "main.h"

/**
 * _pow_recursion - Function to multiply a number recursively
 *
 * @x: number to multiply
 * @y: power
 *
 * Return: positive integer, -1 if negative number
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 1)
			return (x);
		else if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}

	return (-1);
}
