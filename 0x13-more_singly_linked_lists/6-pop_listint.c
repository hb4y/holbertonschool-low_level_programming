#include "lists.h"

/**
 * pop_listint - function that adds a node at beginning
 * @head: list_t address
 * Return: int of the node
 */
int pop_listint(listint_t **head)
{
	int tmp;

	if (!head || !(*head))
		return (0);

	tmp = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (tmp);
}
