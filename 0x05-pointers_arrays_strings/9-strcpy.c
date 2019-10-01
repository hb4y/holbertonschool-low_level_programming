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

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
