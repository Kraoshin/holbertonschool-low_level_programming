#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the nth node of the list
 *
 * @head: pointer to the head of the list
 * @index: the nth node we want to delete
 *
 * Return: -1 if !head/!*head || index > list, 1 if the nodes correctly freed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (i < index)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
