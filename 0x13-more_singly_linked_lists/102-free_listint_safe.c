#include "lists.h"

/**
 * free_listint_safe - Function to free a linked list
 *
 * @h: First node
 *
 * Return: number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t count = 0;
	int ch;

	if (h == NULL || *h == NULL)
		return (count);

	while (*h != NULL)
	{
		change = *h - (*h)->next;
		if (ch > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
