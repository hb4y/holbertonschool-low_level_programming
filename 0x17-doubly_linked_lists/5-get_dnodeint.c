#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: list
 * @index: index of node
 * Return: the node or null if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;

	while (tmp->prev)
		tmp = tmp->prev;

	for (i = 0; tmp; i++)
	{
		if (i == index)
			return (tmp);

		tmp = tmp->next;
	}

	return (NULL);
}
