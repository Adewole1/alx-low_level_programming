#include "main.h"

/**
 * cmp - function to check if a string is palindrome
 * @s: string
 * @len: length of string
 * @i: step increment
 *
 * Return: integer
 */

int cmp(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (cmp(s, i + 1, len - 1));
}


/**
 * string_len - function to count string
 * @s: string to count
 *
 * Return: length
 */

int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}

/**
 * is_palindrome - check for palindrome
 * @s: string to check
 *
 * Return: integer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (cmp(s, 0, string_len(s)));
}
