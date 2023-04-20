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
	char *array;

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

	array = (char *)main;

	for (i = 0; i < nb; i++)
	{
		if (i == nb - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx", array[i]);
	}
	return (0);
}
