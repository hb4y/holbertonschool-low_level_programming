#include "hash_tables.h"

/**
 * key_index - function
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int aux;

	aux = hash_djb2(key);
	return (aux % size);
}
