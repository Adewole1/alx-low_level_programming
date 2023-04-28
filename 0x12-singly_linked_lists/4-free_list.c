#include "lists.h"

/**
 * free_list - Function to free memore allocated yo a linked list
 *
 * @head: The first node of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node = NULL;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
