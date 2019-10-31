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
	char *c; 

	new = malloc(sizeof(list_t));
	len = 0;

	if (!new || !str)
	{
		free(new);
		return (NULL);
	}

	c = strdup(str);
	
	if (!(c))
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = c;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
