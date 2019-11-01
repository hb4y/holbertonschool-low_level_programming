#include "lists.h"

/**
 * free_list - free the mem of the list
 * @head: list_t address
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
