#include "holberton.h"

/**
 * rot13 - rotate 13.
 * @c: init char
 * Return: int
 */

char *rot13(char *c)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (c[i] == alpha[j])
			{
				c[i] = rot[j];
				break;
			}
		}
	}
	return (c);
}
