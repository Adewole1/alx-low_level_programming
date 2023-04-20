#include <stdio.h>
#include <stdlib.h>

/**
 * main - Funtion to print it's own opcodes
 *
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int nb, i;
	int (*addr)(int, char **) = main;
	unsigned char code;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		code = *(unsigned char *)addr;
		printf("%.2x", code);

		if (i == nb - 1)
			continue;

		printf(" ");

		addr++;
	}

	printf("\n");

	return (0);
}
