#include "lists.h"

/**
 * free_listint2 - free the mem of the list && set head to NULL
 * @head: listint_t address
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	if ((*head)->next)
		free_listint2(&(*head)->next);

	free((*head));

	*head = NULL;
}
