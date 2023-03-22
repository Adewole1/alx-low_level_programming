#include <stdio.h>
#include "main.h"

/**
 * main - list all the multiples of
 * 3 and 5 below 1024 and sum them
 *
 * Return: void
 */

void main(void)
{
	int i;
	int sum = 0;

	for (i = 0, i < 1024, i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n",sum);
}
