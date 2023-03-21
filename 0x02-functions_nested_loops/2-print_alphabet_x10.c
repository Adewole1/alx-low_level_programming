#include "main.h"

/**
 * print_alphabet_x10 - Function to print the alphabet
 * ten times
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (int j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
	{			
		_putchar(alphabets[i]);
	}
	_putchar('\n');
	}
}

