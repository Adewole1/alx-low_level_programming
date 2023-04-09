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
	int i, sum = 0;
	char *remain;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			strtol(argv[i], &remain, 10);
			if (strcmp(remain, "") != 0)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%i\n", sum);
	return (0);
}
