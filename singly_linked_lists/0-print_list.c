#include "lists.h"

/**
 * print_list - prints all elements of a list.
 * @h: the list_t list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h = h->next;

	}

	return (node);
}
