#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function to print a dog structure with variables
 *
 * @d: Dog structure to initialize
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (!(d->age))
		d->age = 0;

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
