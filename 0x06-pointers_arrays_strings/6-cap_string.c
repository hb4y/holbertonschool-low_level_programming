#include "holberton.h"

/**
 * cap_string - capitalize all words.
 * @c: init char
 * Return: char pointer
 */

char *cap_string(char *c)
{
	int i, j;
	char *separ = ",;.!?\"(){} \t\n";


	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; c[i] >= 'a' && c[i] <= 'z' && separ[j] != '\0'; j++)
		{
			if (i == 0)
				c[i] = (int)c[i] - 32;
			else if (c[i - 1] == separ[j])
				c[i] = (int)c[i] - 32;
		}
	}
	return (c);
}
