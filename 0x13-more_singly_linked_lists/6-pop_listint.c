#include "lists.h"

/**
 * pop_listint - Pop the first data of a list
 *
 * @head: The first data of the linked list
 *
 * Return: the integeter data of head or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;

	node = (*head)->next;
	free(*head);
	*head = node;

	return (n);
}
