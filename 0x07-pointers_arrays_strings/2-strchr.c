#include "holberton.h"

/**
 * _strchr - function
 * @s: char pointer
 * @c: char
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0;*(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
