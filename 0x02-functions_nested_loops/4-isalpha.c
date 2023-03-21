#include "main.h"

/**
 * isalpha - Function to check if a character is alphabet
 *
 * Return: void
 */
int _isalpha(int c)
{
	char alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	if (c in alphabets)
	{
		return (1);
	} else
	{
		return (0);
	}
}

