#include "lists.h"

/**
 * add_node - function that add node to the top of the linked list
 *
 * @head: pointer to a pointer of the mem adress of the head of the list
 * @str: the string that will be duplicate inside the node
 *
 * Return: if !str or !result : NULL otherwise the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *dup;

	list_t *result = malloc(sizeof(list_t));

	if (!result)
		return (NULL);

	dup = strdup(str);

	if (!dup)
	{
		free(result);
		return (NULL);
	}

	while (str[len])
		len++;

	result->str = dup;
	result->len = len;
	result->next = *head;

	*head = result;

	return (result);
}
