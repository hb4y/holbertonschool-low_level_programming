#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: hash_table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!size)
		return (NULL);
	if (!new_table)
		return (NULL);
	new_table->size = size;
	return (new_table);
}
