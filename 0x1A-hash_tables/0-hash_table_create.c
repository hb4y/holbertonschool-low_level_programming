#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: hash_table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = calloc(sizeof(hash_table_t), 1);

	if ((!new_table) || (!size))
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t **));
	if (!(new_table->array))
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
