#include "lists.h"

/**
 * add_node_end - function that adds a node at beginning
 * @head: list_t address
 * @str: string
 * Return: list_y *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (!(*head) || !((*head)->next))
	{
		new = malloc(sizeof(list_t));


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
		new->next = NULL;

		if (!(*head))
			(*head) = new;
		else
			(*head)->next = new;

		return (new);
	}

	return (add_node_end(&(*head)->next, str));
}
