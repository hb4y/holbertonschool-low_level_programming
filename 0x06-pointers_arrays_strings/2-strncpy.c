#include "holberton.h"

/**
 * _strncpy - copy string.
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
