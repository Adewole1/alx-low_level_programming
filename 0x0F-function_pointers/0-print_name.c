#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function to print based on another function
 *
 * @name: name to print
 * @f: function to call
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
