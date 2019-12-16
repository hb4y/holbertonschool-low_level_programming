#include "lists.h"
/**
 * sum_dlistint - sum all element of the list
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int aux;

	if (!head)
		return (0);

	tmp = head;

	while (tmp->prev)
		tmp = tmp->prev;

	for (aux = 0; tmp->next; tmp = tmp->next)
		aux += tmp->n;

	return (aux + tmp->n);
}
