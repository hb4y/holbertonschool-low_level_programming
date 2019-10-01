#include "holberton.h"

/**
 * _strlen - find the len of a string.
 * @s: char pointer
 * Return: void.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
