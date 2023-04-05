#include "main.h"

/**
 * set_string - Function to point an address to a char
 *
 * @s: variable to point
 * @to: where to point to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
