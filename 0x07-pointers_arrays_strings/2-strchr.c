#include "main.h"

/**
 * *_strchr - function to get the first occurence
 * of a character in a string
 *
 * @s: string memory area to search
 * @c: character to find
 *
 * Return: int
 */

char *_strchr(char *s, char *c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
