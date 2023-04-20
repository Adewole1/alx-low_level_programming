#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Variadic function to print all integer arguments
 *
 * @separator: separator to use to separate numbers
 * @n: number of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;

	if (n <= 0)
		return;

	if (separator == NULL)
		separator = "";

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));

		if (n - i != 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
