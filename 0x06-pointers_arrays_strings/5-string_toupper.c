#include "holberton.h"

/**
 * string_toupper - to upper.
 * @c: init char
 * Return: char pointer
 */

char *string_toupper(char *c)
{
	int i, j;
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (c[i] == lower[j])
			{
				c[i] = upper[j];
				break;
			}
		}
	}
	return (c);
}
