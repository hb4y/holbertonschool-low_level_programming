#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node nth pos
 * @h: list
 * @idx: where the node should be added
 * @n: n value of new node
 * Return: sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i;

	if ((!(*h) && idx != 0) || (!h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	tmp = *h;
	while (tmp->prev)
		tmp = tmp->prev;

	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		if (i == idx)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			(tmp->prev)->next = new;
			tmp->prev = new;
			return (new);
		}
		if (tmp->next == NULL && ((i + 1) == idx))
		{
			tmp->next = new;
			new->prev = tmp;
			new->next = NULL;
			return (new);
		}

	}
	free(new);
	return (NULL);
}
