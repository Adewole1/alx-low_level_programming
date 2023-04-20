#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Variadic function to sum all arguments
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i, sum;

	if (n <= 0)
		return (0);

	sum = 0;
	va_start(args_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args_list, int);

	va_end(args_list);

	return (sum);
}
