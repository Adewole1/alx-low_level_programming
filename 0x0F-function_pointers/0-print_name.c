#include <stdlib.h>
#include "main.h"

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
	void (*ptr)(char *name);

	ptr = f;
}
