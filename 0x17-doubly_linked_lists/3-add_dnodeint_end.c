#include "lists.h"
/**
 * add_dnodeint_end - function
 * @head: head of list
 * @n: n value of new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (*head);
	}

	while ((*head)->next)
		*head = (*head)->next;

	(*head)->next = new;
	new->prev = *head;
	*head = new;

	return (*head);
}
