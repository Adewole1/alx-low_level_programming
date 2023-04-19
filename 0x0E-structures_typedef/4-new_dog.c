#include <stdlib.h>
#include "dog.h"

/**
 * len_str - Function to get length of a string
 * @s: string to count
 *
 * Return: the length of s
 */

int len_str(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * copy_str - Function to copy string from src to dest
 *
 * @src: pointer to the string to be copied
 * @dest: pointer to the new destination
 *
 * Return: pointer to dest
 */

char *copy_str(char *src, char *dest)
{
	unsigned int len, i;

	len = len_str(src);

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Function to create a new dog structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new_dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	unsigned int len_1, len_2;

	len_1 = len_str(name);
	len_2 = len_str(owner);

	dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);

	dog_new->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	dog_new->owner = malloc(sizeof(char) * (len_2 + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new);
		free(dog_new->name);
		return (NULL);
	}

	copy_str(name, dog_new->name);
	copy_str(owner, dog_new->owner);

	dog_new->age = age;

	return (dog_new);
}
