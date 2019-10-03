#include "holberton.h"

/**
 * _strncmp - compare string.
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, ret;

	for (i = 0, ret = 0; ret == 0 && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		ret = (int)(s1[i]) - (int)(s2[i]);
		printf("{%d}\n", ret);
	}
	return (ret);
}
