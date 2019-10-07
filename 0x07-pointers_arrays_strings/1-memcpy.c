#include "holberton.h"

/**
 * _memcpy - function
 * @dest: destiny pntr
 * @src: source pntr
 * @n: n bytes
 * Return: pointer to memo
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
