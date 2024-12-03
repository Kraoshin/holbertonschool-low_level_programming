#include "lists.h"

/**
 * print_dlistint - print every nodes of the list
 *
 * @h: pointer to the mem adress of the list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
