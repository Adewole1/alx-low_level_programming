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
	if (x > 0)
	{
		if (y == 1)
			return (x);
		return (x * _pow_recursion(y - 1));
	}

	return (-1);
}
