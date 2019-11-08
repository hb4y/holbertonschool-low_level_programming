#include "holberton.h"
/**
 * clear_bit - function
 * @n: pointer to UL
 * @index: nth bit to set to 1
 * Return: 1 if work or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
