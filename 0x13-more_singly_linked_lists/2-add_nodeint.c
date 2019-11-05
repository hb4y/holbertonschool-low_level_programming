#include "lists.h"

/**
 * add_nodeint- function that adds a node at beginning
 * @head: list_t address
 * @n: int to add
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
