#include "hash_tables.h"

/**
 * hash_table_set - funtion
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node = NULL;
	hash_node_t *aux = NULL;

	if ((!ht) || (!key) || (!value))
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	aux = ht->array[i];

	for (; aux; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
	}

	new_node = calloc(sizeof(hash_node_t), 1);
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
