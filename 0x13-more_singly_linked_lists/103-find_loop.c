#include "lists.h"

/**
 * find_listint_loop - Function to find a loop in a linked list
 *
 * @head: First node
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new_node = head;
	listint_t *old_node = head;

	if (head == NULL)
		return (NULL);

	while (new_node != NULL && old_node != NULL && old_node->next != NULL)
	{
		old_node = old_node->next->next;
		new_node = new_node->next;
		if (old_node == new_node)
		{
			new_node = head;
			while (new_node != old_node)
			{
				old_node = old_node->next;
				new_node = new_node->next;
			}
			return (new_node);
		}
	}

	return (NULL);
}
