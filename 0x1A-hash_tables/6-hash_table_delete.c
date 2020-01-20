#include "hash_tables.h"

/**
 * hash_table_delete - func
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *aux;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		for (; tmp; tmp = tmp->next)
		{
			aux = tmp;
			free(tmp->key);
			free(tmp->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
