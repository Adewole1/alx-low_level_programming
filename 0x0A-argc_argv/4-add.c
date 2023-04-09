#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function to print it's name in std
 *
 * @argc: argument count
 * @argv: array of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = - 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
		return (0);
	}

	printf("%d\n", 0);
	return (0);
}
