#include "lists.h"

/**
 * add_node- function that adds a node at beginning
 * @head: list_t address
 * @str: string
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	len = 0;

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!(new->str))
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->next = *head;
	*head = new;

	return (NULL);
}
