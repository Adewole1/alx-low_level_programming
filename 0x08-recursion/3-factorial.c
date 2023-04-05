#include "main.h"

/**
 * factorial - Function to get factorial of a number
 *
 * @n: starting number
 *
 * Return: positive integer, -1 if negative number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
	{
		if (n < 1)
			return (1);
		return (n * factorila(n-1));
	}
}
