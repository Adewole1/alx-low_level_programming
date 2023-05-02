#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a new node at nth index of a list
 *
 * @head: The first data of the linked list
 * @index: nth position to delete data
 *
 * Return: 1 for success or -1 for fail
 */
int *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = NULL;
	listint_t *old = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(old);
		return (1);
	}

	while (count < index - 1)
	{
		if (old == NULL || (old->next) == NULL)
			return (-1);

		old = old->next;
		count++;
	}

	node = old->next;
	old->next = node->next;
	free(node);

	return (1);
}
