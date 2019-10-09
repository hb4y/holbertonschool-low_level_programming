#include "holberton.h"

/**
 * _strlen_recursion - function
 * @s: char pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
