#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse using recursion
 *
 * @s: string to print
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	} else
	{
		_putchar('\n');
	}
}
