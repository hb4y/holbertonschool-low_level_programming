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

	new = malloc(sizeof(dlistint_t));

	if ((!new) || (!(*h) && idx > 0) || (!h))
		return (NULL);

	new->n = n;
	tmp = *h;

	while (tmp->prev)
		tmp = tmp->prev;

	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	for (i = 0; tmp && i < idx; i++, tmp = tmp->next)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
				new = add_dnodeint_end(h, n);
			else
			{
				new->next = tmp->next;
				new->prev = tmp;
				tmp->next = new;
				(tmp->next)->prev = new;
			}
			return (new);
		}
	}

	free(new);
	return (NULL);
}
