#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: listint_t address
 * @idx: index to insert
 * @n: value of the node
 * Return: address of new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	tmp = malloc(sizeof(listint_t));

	if (!new || !tmp || (!(*head) && idx > 0))
		return (NULL);

	new->n = n;

	if (!(head) && idx == 0)
	{
		new->next = NULL;
		return (new);
	}

	tmp = *head;

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
