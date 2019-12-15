#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->prev)
		head = head->prev;

	for (; head->next; head = head->next)
		free(head);

	free(head);
}
