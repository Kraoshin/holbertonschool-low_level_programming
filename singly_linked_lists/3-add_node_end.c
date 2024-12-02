#include "lists.h"

/**
 * add_node_end - function that adds a node at the end of a linked list
 *
 * @head: pointer to a pointer pointing to the mem adress of the head of list
 * @str: string to be duplicated at the end of the list
 *
 * Return: NULL if malloc or strdup fails, otherwise the adress of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	int len = 0;
	char *dup;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	dup = strdup(str);

	if (!dup)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup;

	while (str[len])
		len++;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
