#include "lists.h"

/**
 * add_nodeint - Funtion to add new node to th3 beginning of a list
 *
 * @head: pointer to old nodr head
 * @n: new integer data to add
 *
 * Return: address of new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
