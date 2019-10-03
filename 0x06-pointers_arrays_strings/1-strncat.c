#include "holberton.h"

/**
 * _strncat - concat 2 strings.
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';

	return (dest);
}
