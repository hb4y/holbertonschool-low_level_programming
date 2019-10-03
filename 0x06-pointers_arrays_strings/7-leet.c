#include "holberton.h"

/**
 * leet - 1337
 * @c: init char
 * Return: char pointer
 */

char *leet(char *c)
{
	int i, j;
	char *letter = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (c[i] == letter[j])
			{
				c[i] = leet[j];
				break;
			}
		}
	}
	return (c);
}
