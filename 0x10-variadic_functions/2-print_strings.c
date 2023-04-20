#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Variadic function to print all string arguments
 *
 * @separator: separator to use to separate strings
 * @n: number of arguments
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	char *string;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(args_list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args_list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (n - i != 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args_list);
}
