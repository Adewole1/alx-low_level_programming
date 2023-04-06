#include "main.h"

/**
 * is_prime - check from 2 upward
 *
 * @n: number to check
 * @i: step increment
 *
 * Return: integer
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == n)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 *
 * @n: number to check
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (is_prime(n, 2));
}
