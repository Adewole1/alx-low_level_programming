#include "main.h"

/**
 * *_memcpy - function to copy the first n bytes of the memory area
 * from src to dest
 *
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: number of bytes to be replaced
 *
 * Return: pointer to the dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
