#include "main.h"

/**
 * *_strstr - function to get the first occurence
 * of a substring in a string
 *
 * @haystack: string memory area to search
 * @needle: substring to find
 *
 * Return: pointer to substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
