#include "lists.h"

/**
 * free_listint - Function to free memore allocated yo a linked list
 *
 * @head: The first node of the linked list
 *
 * Return: nothing
 */
void free_listint(list_t *head)
{
	list_t *node = NULL;

	while (head != NULL)
	{
		node = head->next;
		free(head->n);
		free(head);
		head = node;
	}
}
