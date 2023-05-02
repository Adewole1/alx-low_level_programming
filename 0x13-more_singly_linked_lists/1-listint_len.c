#include "lists.h"

/**
 * listint_len - return the length of a list
 *
 * @h: pointer to the first data of the linked list
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
