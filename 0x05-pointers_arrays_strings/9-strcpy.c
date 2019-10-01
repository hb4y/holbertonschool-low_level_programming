#include "holberton.h"

/**
 * _strcpy - copy an array.
 * @dest: destiny 
 * @src: source
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 100;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
        return dest;
}
