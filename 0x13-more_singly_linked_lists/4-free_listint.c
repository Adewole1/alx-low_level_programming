#include "lists.h"

/**
 * free_listint - Function to free memore allocated yo a linked list
 *
 * @head: The first node of the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
