#include "holberton.h"

/**
 * _memset - function
 * @s: char pointer
 * @b: char
 * @n: n bytes
 * Return: pointer to memo
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
