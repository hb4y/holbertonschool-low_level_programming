#include "lists.h"
/**
 * add_dnodeint - function
 * @head: head of list
 * @n: n value of new node
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	while ((*head)->prev)
		*head = (*head)->prev;

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (*head);
}
