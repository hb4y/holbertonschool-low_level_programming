#include "holberton.h"
/**
 * get_bit - function
 * @n: unsigned long int
 * @index: nth bit to print
 * Return: void, print number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
