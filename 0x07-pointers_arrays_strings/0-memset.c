#include "main.h"

/**
 * *_memset - function to fill the first n bytes of the memory area
 * pointed to by s with the constant bye b
 *
 * @s: memory area
 * @b: byte to replace with
 * @n: number of bytes to be replaced
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
