#include "main.h"

/**
 * main - Function to Print the alphabet line by line.
 *
 * Return: Always 0 (Success)
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

int main(void)
{
	print_alphabet();
	return (0);
}
