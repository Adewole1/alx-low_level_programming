#include "lists.h"

/**
 * print_list - Print the content of a list with their length
 *
 * @h: Th3 first data of the linked list
 *
 * Return: the size of the list
 */
size_t print_list(const list_t *h)
{
	char *str_chars;
	int str_len;
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		str_chars = h->str;
		str_len = h->len;

		if (str_chars == NULL)
		{
			str_chars = "(nil)";
			str_len = 0;
		}

		printf("[%d] %s\n", str_len, str_chars);
		h = h->next;
	}

	return (count);
}
