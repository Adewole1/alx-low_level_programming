#include "lists.h"

/**
 * add_node - Funtion to add new node to th3 beginning of a list
 *
 * @head: pointer to old nodr head
 * @str: new string data to add
 *
 * Return: address of new head
 */
list_t *add_node(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new_node = NULL;

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
