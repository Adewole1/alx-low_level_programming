#include "lists.h"

/**
 * print_listint_safe - Prints nodes in looped linked list uniquely
 *
 * @head: First node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no_nodes, count = 0;

	no_nodes = loopedlistint_nodes_len(head);

	if (no_nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			no_nodes++;
		}
	}
	else
	{
		while (count < no_nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

/**
 * loopedlistint_nodes_len - Function to get the number of unique looped list
 *
 * @head: First node
 *
 * Return: size of unique nodes else 0
 */
size_t loopedlistint_nodes_len(const listint_t *head)
{
	listint_t *current = NULL, *next = NULL;
	size_t no_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	next = (head->next)->next;

	while (next != NULL)
	{
		if (current == previous)
		{
			current = head;
			while (current != next)
			{
				current = current->next;
				next = next->next;
				no_nodes++;
			}
			current = current->next;
			while (current != next)
			{
				current = current->next;
				no_nodes++;
			}

			return (no_nodes);
		}
		current = current->next;
		next = (next->next)->next;
	}

	return (0);
}
