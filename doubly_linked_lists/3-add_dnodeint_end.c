#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 *
 * @head: pointer to the mem adress of a list
 * @n: the number we want to add at the end of the list
 *
 * Return: NULL if !head or if malloc fail else the mem adress of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	tmp = *head;

	if (head == NULL)
		return (NULL);

	while (tmp && tmp->next)
		tmp = tmp->next;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = NULL;

	if (tmp != NULL)
		tmp->next = new_node;

	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
