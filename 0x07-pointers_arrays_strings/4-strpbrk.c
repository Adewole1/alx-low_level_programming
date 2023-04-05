#include "main.h"

/**
 * *_strpbrk - function to locate the first occurence in string
 * based on another string
 *
 * @s: string memory area
 * @accept: string segment to find
 *
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
