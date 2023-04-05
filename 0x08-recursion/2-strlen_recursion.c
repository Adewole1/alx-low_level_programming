#include "main.h"

/**
 * _strlen_recursion - function to recursibely count length of string
 *
 * @s: string to count
 *
 * Return: count
 */

int _strlen_recursion(char *s)
{
	int count = 0;
	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s+1);
	}
	
	return (count);
}
