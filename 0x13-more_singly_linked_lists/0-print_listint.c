#include "lists.h"

/**
 * print_listint - Print the content of a list with their length
 *
 * @h: The first data of the linked list
 *
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;

		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
