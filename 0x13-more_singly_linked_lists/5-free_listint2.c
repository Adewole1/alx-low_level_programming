#include "lists.h"

/**
 * free_listint2 - Function to free memore allocated yo a linked list
 *
 * @head: The first node of the linked list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	*head = NULL;
}
