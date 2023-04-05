#include "main.h"

/**
 * _puts_recursion - function to use _puts to recursibely print string
 *
 * @s: string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);

		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
