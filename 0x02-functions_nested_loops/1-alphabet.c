#include "main.h"

/**
 * print_alphabet - Function to print the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}

