#include "hash_tables.h"

/**
 * hash_table_print - function
 * @ht: hash table
 * Return: just print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	int ini = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		for (; aux; aux = aux->next)
		{
			if (ini)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			ini = 1;
		}
	}
	printf("}\n");
}
