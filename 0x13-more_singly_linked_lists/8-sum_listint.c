#include "lists.h"

/**
 * sum_listint - Sum the content of a list with
 *
 * @head: The first data of the linked list
 *
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
