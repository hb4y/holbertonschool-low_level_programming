#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: listint_t address
 * @index: index to insert
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (!head || !(*head))
		return (-1);

	if (index == 0)
	{
		if (!((*head)->next))
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		free(*head);
		*head = (*head)->next;
		return (1);
	}

	tmp = *head;

	for (i = 0; tmp && i < index; i++)
	{
		if (i == index - 1)
		{
			if (tmp->next)
			{
				free(tmp->next);
				tmp->next = (tmp->next)->next;
				return (1);
			}
		}
		tmp = tmp->next;
	}
	return (-1);
}
