#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at beginning
 * @head: list_t address
 * @n: int for node
 * Return: listint_t *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head) || !((*head)->next))
	{
		new = malloc(sizeof(listint_t));

		if (!new)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (!(*head))
			(*head) = new;
		else
			(*head)->next = new;

		return (new);
	}

	return (add_nodeint_end(&(*head)->next, n));
}
