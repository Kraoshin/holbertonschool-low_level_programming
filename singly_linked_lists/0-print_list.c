#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 *
 * @h: pointer to the mem adress of the list_t list
 *
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		node_num++;
		h = h->next;
	}

	return (node_num);
}
