#include "main.h"

/**
 * _isalpha - Function to check if a character is alphabet
 *
 * @c: character c to be checked
 *
 * Return: void
 */
int _isalpha(int c)
{	
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

