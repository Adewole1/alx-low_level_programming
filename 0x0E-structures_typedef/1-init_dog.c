#include "main.h"

/**
 * init_dog - Function to initialize a dog structure with variables
 *
 * @d: Dog structure to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
