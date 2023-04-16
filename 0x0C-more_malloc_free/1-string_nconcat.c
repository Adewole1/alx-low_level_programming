#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function to recursively count length of string
 *
 * @str: string to count
 *
 * Return: count
 */

int _strlen_recursion(char *str)
{
	int count = 0;

	if (*str != '\0')
	{
		count++;
		count += _strlen_recursion(str + 1);
	}

	return (count);
}

/**
 * string_nconcat - function to create array of characters to allocated memory
 *
 * @s1: string 1 to fill memory with
 * @s2: string 2 to fill memory with
 * @n: number of byte to take in s2
 *
 * Return: pointer to new array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, j = 0;
	unsigned int size;
	unsigned int size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen_recursion(s1);
	size2 = _strlen_recursion(s2);
	size = size1 + size2;

	new_str = malloc(size * sizeof(*new_str) + 1);

	if (new_str == NULL)
		return (NULL);

	if (size1 != 0)
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
	}

	if (size2 != 0)
	{
		while (n > 0 && s2[j] != '\0')
		{
			new_str[i] = s2[j];
			i++;
			j++;
			n--;
		}
	}

	return (new_str);
}
