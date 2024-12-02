#include "lists.h"

/**
 * list_len - return the number of nodes in the list_t list
 *
 * @h: pointer to the mem adress of the list_t list
 *
 * Return: the number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}

	return (node_num);
}
