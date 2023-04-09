#include <stdio.h>

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
	if (argc == 2)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (1);
	}

	printf("Error\n");
	return (0);
}
