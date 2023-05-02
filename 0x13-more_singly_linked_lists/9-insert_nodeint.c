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
	unsigned int count = 0;
	listint_t *node = NULL;
	listint_t *temp = NULL;

	node = malloc(sizeof(listint_t));

	if (head == NULL || *head == NULL || node == NULL)
		return (NULL);

	temp = *head;
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (temp != NULL && count < idx)
	{
		if (count == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
		count++;
	}

	return (NULL);
}
