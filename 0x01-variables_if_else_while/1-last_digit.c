#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - using printif() to print a conditional
 *
 * Description: This checks if
 * a variable is more than ore less than
 * or equal to 5 or 6
 * Return: it returns integer 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n%10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	} else if ((n%10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	} else if ((n%10) < 6 && (n%10) != 0)
	{
		printf("Last digit of %d is %d and is less than \
6 and not 0\n", n, n%10);
	}
	return (0);
}
