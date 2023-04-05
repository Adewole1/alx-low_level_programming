#include "main.h"

/**
 * *_strchr - function to search the first occurence of a char
 *
 * @s: string memory area
 * @c: character to find
 *
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
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
