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
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;

		old = *head;
		*head = new;
	}

	*head = old;

	return (*head);
}
