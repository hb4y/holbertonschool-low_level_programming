#include "holberton.h"

/**
 * malloc_checked - function
 * @b: bytes to allocate
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);

	if (!arr)
		exit(98);
	return (arr);
}
