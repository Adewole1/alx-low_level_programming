#include <stdio.h>

/**
 * main - Function to Print the alphabet line by line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
