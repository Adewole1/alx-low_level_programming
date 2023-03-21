#include "main.h"

/**
 * main - Function to Print the alphabet.
 *
 * Description - This function prints aplphabet letters
 * using _putchar
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

