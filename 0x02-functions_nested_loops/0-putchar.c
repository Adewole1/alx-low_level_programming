#include <main.h>

/**
 * main - Function to Print the alphabet line by line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char putchar[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');
	return (0);
}
