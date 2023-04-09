#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print it's name in std
 *
 * @argc: argument count
 * @argv: array of arguments passed
 *
 * Return: exit status
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}

	printf("Error\n");
	return (1);
}
