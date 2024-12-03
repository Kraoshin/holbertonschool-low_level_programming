#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at the index node of the list
 *
 * @h: pointer to the head of the mem adress
 * @idx: the index where we want to insert the new node
 * @n: the value of the new node
 *
 * Return: NULL if malloc fails or not enough node to reach the index node
 * the adress of the new node otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		idx--;
	}

	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next->prev = newnode;
	tmp->next = newnode;

	return (newnode);
}
