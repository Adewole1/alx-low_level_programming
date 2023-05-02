#include "lists.h"

/**
 * add_nodeint_end - Funtion to add new node to the end of a list
 *
 * @head: pointer to old nodr head
 * @n: new integer data to add
 *
 * Return: address of new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *last_node = NULL;

	new_node = malloc(sizeof(listint_t));
	last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
