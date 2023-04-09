#include "main.h"

/**
 * main - using puts() to print
 *
 * @s: string to be printed
 * Return: it returns integer 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}

	_putchar('\n');
}
