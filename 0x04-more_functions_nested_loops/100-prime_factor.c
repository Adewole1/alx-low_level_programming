#include <stdio.h>

/**
 * main - Function to get prime factors
 *
 * Return: Always zero
 */

int main(void)
{
	int i, factor;
	long n;

	n = 612852475143;

	while (n >= 2)
	{
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				factor = i;
				n = n / i;
				break;
			}
		}
	}
	printf("%d\n", factor);

	return (0);
}
