#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Variadic function to print all types of arguments
 *
 * @format: format of argument to print
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args_list;
	char *string, *separator = "";
	unsigned int i = 0;

	va_start(args_list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 's':
					string = va_arg(args_list, char *);
					if (!string)
						printf("%s(nil)", separator);
					else
						printf("%s%s", separator, string);
					break;
				case 'c':
					printf("%s%c", separator, va_arg(args_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args_list, double));
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args_list);
}
