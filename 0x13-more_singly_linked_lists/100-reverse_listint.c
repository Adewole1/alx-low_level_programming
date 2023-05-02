#include "lists.h"

/**
 * reverse_listint - Function to reverse the node of a sinly list
 *
 * @head: The first node
 *
 * Return: the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *new_node = NULL;

	while (*head != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = old_node;

		old_node = *head;
		*head = new_node;
	}

	*head = old_node;

	return (*head);
}
