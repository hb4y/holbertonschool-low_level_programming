#include "holberton.h"
/**
 * set_bit: - function
 * @n: pointer to UL
 * @index: nth bit to set to 1
 * Return: 1 if work or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;

	*n = *n | mask;

	return (1);
}
