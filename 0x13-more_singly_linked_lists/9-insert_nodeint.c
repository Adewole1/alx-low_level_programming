#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at nth index of a list
 *
 * @head: The first data of the linked list
 * @idx: nth position to insert data
 * @n: data to be inserted
 *
 * Return: the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL || node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (*head != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			node->next = (*head)->next;
			(*head)->next = node;
			return (node);
		}
		else
			*head = (*head)->next;
		count++;
	}

	return (node);
}
