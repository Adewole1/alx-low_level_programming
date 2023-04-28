#include "lists.h"

/**
 * add_node_end - Funtion to add new node to the end of a list
 *
 * @head: pointer to old nodr head
 * @str: new string data to add
 *
 * Return: address of new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new_node = NULL;
	list_t *last_node = NULL;

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
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
