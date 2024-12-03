#include "lists.h"

/**
 * sum_dlistint - add all the value in the nodes of a list
 *
 * @head: pointer to the mem adress of the head of the list
 *
 * Return: the sum of the nth nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
