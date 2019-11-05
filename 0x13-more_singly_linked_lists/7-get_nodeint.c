#include "lists.h"

/**
 * get_nodeint_at_index - function that get the nth node
 * @head: listint_t address
 * @index: nth
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	if (!head)
		return (NULL);

	tmp = head;

	for (i = 0; tmp; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}

	return (NULL);
}
