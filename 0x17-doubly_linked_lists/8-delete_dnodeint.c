#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node nth pos
 * @head: list
 * @index: where the node should be deleted
 * Return: number of nodes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!(*head) || (!head))
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp; i++, tmp = tmp->next)
	{
		if (i == index)
		{
			if (tmp->next && tmp->prev)
			{
				(tmp->next)->prev = tmp->prev;
				(tmp->prev)->next = tmp->next;
				free(tmp);
				return (1);
			}
			if (tmp->prev)
			{
				(tmp->prev)->next = NULL;
				free(tmp);
				return (1);
			}
		}
	}
	return (-1);
}
