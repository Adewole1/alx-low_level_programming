#include "main.h"

/**
 * sqrt_rec - Check through all number before n
 *
 * @n: input number
 * @i: step increment
 *
 * Return: integer
 */

int sqrt_rec(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (sqrt_rec(n, i + 1));
}

/**
 * _sqrt_recursion - Function to calculate the square root of a number
 *
 * @n: input number
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n >= 0)
		return (sqrt_rec(n, 0));
	return (-1);
}
