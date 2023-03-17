#include <stdio.h>

/**
 * main - Prints all single digits, i.e less than 10
 * using ordinate form
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
