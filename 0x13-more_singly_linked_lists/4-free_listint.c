#include "lists.h"

/**
 * free_listint - free the mem of the list
 * @head: listint_t address
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_listint(head->next);

	free(head);
}
