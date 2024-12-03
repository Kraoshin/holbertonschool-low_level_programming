#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 *
 * @head: pointer to the head of the list
 * @index: the nth node we want to display
 *
 * Return: NULL if !head, the nth node otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}

	return (head);
}
