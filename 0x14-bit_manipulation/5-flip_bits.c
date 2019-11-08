#include "holberton.h"
/**
 * flip_bits - function
 * @n: 1 number
 * @m: 2 number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, mask, xor;

	flip = 0;

	xor = n ^ m;

	for (mask = 1UL << 63; mask > 0; mask = mask >> 1)
	{
		if (xor & mask)
			flip++;
	}

	return (flip);
}
