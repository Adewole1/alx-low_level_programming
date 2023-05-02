#include "lists.h"

/**
 * get_nodeint_at_index - Get nth node of a list
 *
 * @head: The first data of the linked list
 * @index: nth element to get
 *
 * Return: the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = head;

	while (node != NULL && count < index)
	{
		node = node->next;
		count++;
	}

	return (node);
}
