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

	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
