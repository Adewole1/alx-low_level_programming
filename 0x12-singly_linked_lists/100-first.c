#include "lists.h"

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - Function to print a syring before main function is executed
 *
 * Return: nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\n");
	printf("I bore my house upon my back!\n");
}
