#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function to free dog memory previously created
 *
 * @d: dog memory to be free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
